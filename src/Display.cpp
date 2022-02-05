#include "Display.h"

#include "VisualizedException.h"
#include "Keyboard.h"

using namespace Visualized;

Display::Display(const std::string& windowTitle, s32 windowWidth, s32 windowHeight) : windowTitle(windowTitle), windowWidth(windowWidth), windowHeight(windowHeight) {}

void Display::createWindow() {
    // If window has already been created, abort.
    if(window != nullptr) return;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, true);

    window = glfwCreateWindow(windowWidth, windowHeight, windowTitle.c_str(), nullptr, nullptr);

    if(window == nullptr) throw VisualizedException();

    glfwMakeContextCurrent(window);
}

void Display::setResizable(bool resizable) {
    glfwWindowHint(GLFW_RESIZABLE, resizable);
}

void Display::setKeyboardActionCallback(GLFWkeyfun callback) {
    Visualized::Keyboard::setKeyboardActionCallback(window, callback);
}

void Display::enableDefaultCursor() {
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);
}

void Display::hideDefaultCursor() {
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_HIDDEN);
}

void Display::disableDefaultCursor() {
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
}

GLFWwindow* Display::getWindow() const {
    return window;
}

Keyboard& Display::getKeyboard() {
    if(keyboard == nullptr) keyboard = new Keyboard(window);
    return *keyboard;
}

Mouse& Display::getMouse() {
    if(mouse == nullptr) mouse = new Mouse(window);
    return *mouse;
}
