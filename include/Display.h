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

            static void setResizable(bool resizable);

            void setKeyboardActionCallback(GLFWkeyfun callback);

            void enableDefaultCursor();
            void hideDefaultCursor();
            void disableDefaultCursor();

            GLFWwindow* getWindow() const;

            Keyboard& getKeyboard();

            Mouse& getMouse();

        private:
            GLFWwindow* window = nullptr;
            std::string windowTitle;
            s32 windowWidth;
            s32 windowHeight;

            Keyboard* keyboard = nullptr;
            Mouse* mouse = nullptr;
    };
}