#include <stdio.h>
#include <GL/glfw3.h>
#include <emscripten/emscripten.h>

typedef void (*renderFunc)();

void doRenderingLoop(renderFunc doRendering) {
    emscripten_set_main_loop(doRendering, 0, 1);
}
