#pragma once

#include <GLFW/glfw3.h>

namespace Visualized {
    class Mouse {
        public:
            explicit Mouse(GLFWwindow* window);

            void setMoveActionCallback(GLFWcursorposfun callback);

            static void setMouseMoveActionCallback(GLFWwindow* window, GLFWcursorposfun callback);

        private:
            GLFWwindow* window;
    };
}