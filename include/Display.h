#pragma once

#include "Types.h"

#include "Keyboard.h"
#include "Mouse.h"

#include <GLFW/glfw3.h>
#include <string>

namespace Visualized {
    class Display {
        public:
            Display(const std::string& windowTitle, s32 windowWidth, s32 windowHeight);

            void createWindow();

            void setFramebufferResizeCallback(GLFWframebuffersizefun callback);

            bool isWindowExitRequested() const;

            GLFWwindow* getWindow() const;

            Keyboard& getKeyboard();

            Mouse& getMouse();

            static void setResizable(bool resizable);

            static void setDisplayFramebufferResizeCallback(GLFWwindow* window, GLFWframebuffersizefun callback);

        private:
            GLFWwindow* window = nullptr;
            std::string windowTitle;
            s32 windowWidth;
            s32 windowHeight;

            Keyboard* keyboard = nullptr;
            Mouse* mouse = nullptr;
    };
}