//
// Created by sneakyfox on 5/19/24.
//
#include <cstdlib>
#include "OpenGLRenderer.h"

OpenGLRenderer::OpenGLRenderer() {

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    this->mp_window = glfwCreateWindow(800, 600, "OpenGL Renderer", NULL, NULL);
    if (!this->mp_window) {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(this->mp_window);
    gladLoadGL(glfwGetProcAddress);
    glfwSwapInterval(1);
}

OpenGLRenderer::~OpenGLRenderer() {

}

void OpenGLRenderer::render() {
    int width, height;
    glfwGetFramebufferSize(this->mp_window, &width, &height);
    glViewport(0, 0, width, height);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(this->mp_window);
}

void OpenGLRenderer::shutdown() {
    glfwDestroyWindow(this->mp_window);
}
