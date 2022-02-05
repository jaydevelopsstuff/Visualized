#include <Keyboard.h>

using namespace Visualized;

Keyboard::Keyboard(GLFWwindow* window) : window(window) {}

void Keyboard::setActionCallback(GLFWkeyfun callback) {
    setKeyboardActionCallback(window, callback);
}

void Keyboard::setKeyboardActionCallback(GLFWwindow* window, GLFWkeyfun callback) {
    glfwSetKeyCallback(window, callback);
}
