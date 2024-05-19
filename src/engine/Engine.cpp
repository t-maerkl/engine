//
// Created by sneakyfox on 5/19/24.
//
#include <cstdlib>
#include <cstdio>

#include "../rendering/openGL/OpenGLRenderer.h"
#include "Engine.h"

Engine::Engine() {

    glfwSetErrorCallback(Engine::handleError);

    if(!glfwInit()) {
        fprintf(stderr, "Error: Cannot init GLFW\n");
    }

    this->mp_renderer = new OpenGLRenderer();
    glfwSetKeyCallback(this->mp_renderer->getWindow(), Engine::handleInput);
}

Engine::~Engine() {
    delete this->mp_renderer;
}

void Engine::shutdown() {
    this->mp_renderer->shutdown();
    glfwTerminate();
}

void Engine::run() {
    while(!glfwWindowShouldClose(this->mp_renderer->getWindow())) {
        this->mp_renderer->render();
        glfwPollEvents();
    }
    this->shutdown();
}

void Engine::handleError(int errorCode, const char *description) {
    fprintf(stderr, "Error %d: %s\n", errorCode, description);
}

void Engine::handleInput(GLFWwindow *window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
}