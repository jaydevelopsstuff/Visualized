#include "Mouse.h"

using namespace Visualized;

Mouse::Mouse(GLFWwindow* window) : window(window) {}

void Mouse::enableDefaultCursor() {
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
}

void Mouse::hideDefaultCursor() {
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);
}

void Mouse::disableDefaultCursor() {
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
}

void Mouse::setButtonActionCallback(GLFWmousebuttonfun callback) {
    setMouseButtonActionCallback(window, callback);
}

void Mouse::setMoveActionCallback(GLFWcursorposfun callback) {
    setMouseMoveActionCallback(window, callback);
}

void Mouse::setMouseButtonActionCallback(GLFWwindow* window, GLFWmousebuttonfun callback) {
    glfwSetMouseButtonCallback(window, callback);
}

void Mouse::setMouseMoveActionCallback(GLFWwindow* window, GLFWcursorposfun callback) {
    glfwSetCursorPosCallback(window, callback);
}
