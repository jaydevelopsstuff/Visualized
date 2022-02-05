#pragma once

#include <GLFW/glfw3.h>

namespace Visualized {
    class Keyboard {
        public:
            explicit Keyboard(GLFWwindow* window);

            void setActionCallback(GLFWkeyfun callback);

            static void setKeyboardActionCallback(GLFWwindow* window, GLFWkeyfun callback);

        private:
            GLFWwindow* window;
    };
}