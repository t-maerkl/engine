//
// Created by sneakyfox on 5/19/24.
//

#ifndef ENGINE_ENGINE_H
#define ENGINE_ENGINE_H


#include "GLFW/glfw3.h"
#include "../rendering/ARenderer.h"

class Engine {

private:
    ARenderer* mp_renderer;

    void shutdown();
public:
    Engine();
    ~Engine();

    void run();

    static void handleError(int errorCode, const char* description);
    static void handleInput(GLFWwindow* window, int key, int scancode, int action, int mods);

};


#endif //ENGINE_ENGINE_H
