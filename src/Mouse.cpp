#include "Mouse.h"

using namespace Visualized;

Mouse::Mouse(GLFWwindow* window) : window(window) {}

void Mouse::setMoveActionCallback(GLFWcursorposfun callback) {
    setMouseMoveActionCallback(window, callback);
}

void Mouse::setMouseMoveActionCallback(GLFWwindow* window, GLFWcursorposfun callback) {
    glfwSetCursorPosCallback(window, callback);
}
