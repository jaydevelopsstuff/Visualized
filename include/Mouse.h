#pragma once

#include <GLFW/glfw3.h>

namespace Visualized {
    class Mouse {
        public:
            explicit Mouse(GLFWwindow* window);

            void enableDefaultCursor();
            void hideDefaultCursor();
            void disableDefaultCursor();

            void setButtonActionCallback(GLFWmousebuttonfun callback);
            void setMoveActionCallback(GLFWcursorposfun callback);

            static void setMouseButtonActionCallback(GLFWwindow* window, GLFWmousebuttonfun callback);
            static void setMouseMoveActionCallback(GLFWwindow* window, GLFWcursorposfun callback);

        private:
            GLFWwindow* window;
    };
}