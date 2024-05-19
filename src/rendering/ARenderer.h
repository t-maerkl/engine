//
// Created by sneakyfox on 5/19/24.
//

#ifndef ENGINE_ARENDERER_H
#define ENGINE_ARENDERER_H


#include "GLFW/glfw3.h"

class ARenderer {

protected:
    GLFWwindow* mp_window = nullptr;

public:
    ARenderer() = default;
    virtual ~ARenderer() = default;
    virtual void render() = 0;
    virtual void shutdown() = 0;

    GLFWwindow* getWindow();
};


#endif //ENGINE_ARENDERER_H
