#include <stdio.h>
#include <GLFW/glfw3.h>

typedef void (*renderFunc)();

void doRenderingLoop(renderFunc doRendering) {
    /* Loop until the user closes the window */
    while (glfwGetWindowParam( GLFW_OPENED ))
    {
        doRendering();
    }
}
