//
// Created by sneakyfox on 5/19/24.
//

#ifndef ENGINE_OPENGLRENDERER_H
#define ENGINE_OPENGLRENDERER_H

#include "../../extern/glad/include/glad/gl.h"
#define GLFW_INCLUDE_NONE

#include "../ARenderer.h"

class OpenGLRenderer : public ARenderer {

public:
    OpenGLRenderer();
    ~OpenGLRenderer() override;
    void render() override;
    void shutdown() override;
};


#endif //ENGINE_OPENGLRENDERER_H
