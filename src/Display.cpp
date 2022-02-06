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
    // Set a default viewport
    glViewport(0, 0, windowWidth, windowHeight);

    // Set the resize callback to a default that resizes the viewport
    /*auto viewportResize = [](GLFWwindow*, s32 width, s32 height) {
        glViewport(0, 0, width, height);
    };
    setFramebufferResizeCallback(viewportResize);*/
}

void Display::setFramebufferResizeCallback(GLFWframebuffersizefun callback) {
    setDisplayFramebufferResizeCallback(window, callback);
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

void Display::setResizable(bool resizable) {
    glfwWindowHint(GLFW_RESIZABLE, resizable);
}

void Display::setDisplayFramebufferResizeCallback(GLFWwindow* window, GLFWframebuffersizefun callback) {
    glfwSetFramebufferSizeCallback(window, callback);
}
