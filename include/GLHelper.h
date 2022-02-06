#pragma once

#include <GL/gl.h>
#include "Types.h"

namespace Visualized {
    /**
     * Clears the screen with GL_COLOR_BUFFER_BIT and the specified float color values.
     * @param red Clamped (0 - 1) red value.
     * @param green Clamped (0 - 1) green value.
     * @param blue Clamped (0 - 1) blue value.
     * @param alpha Clamped (0 - 1) alpha value.
     */
    void clearScreen(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
        glClearColor(red, green, blue, alpha);
    }

    /**
     * Clears the screen with GL_COLOR_BUFFER_BIT and the specified float color values.
     * @param red Clamped (0 - 1) red value.
     * @param green Clamped (0 - 1) green value.
     * @param blue Clamped (0 - 1) blue value.
     */
    void clearScreen(GLclampf red, GLclampf green, GLclampf blue) {
        clearScreen(red, green, blue, 1);
    }

    /**
     * Clears the screen with GL_COLOR_BUFFER_BIT and the specified 8 bit integer (0 - 255) color values.
     * @param red 8 bit integer (0 - 255) red value.
     * @param green 8 bit integer (0 - 255) green value.
     * @param blue 8 bit integer (0 - 255) blue value.
     * @param alpha 8 bit integer (0 - 255) alpha value.
     */
    void clearScreen(u8 red, u8 green, u8 blue, float alpha) {
        clearScreen((float)((float)red / 255.0), (float)((float)green / 255.0), (float)((float)blue / 255.0), alpha);
    }

    /**
     * Clears the screen with GL_COLOR_BUFFER_BIT and the specified 8 bit integer (0 - 255) color values.
     * @param red 8 bit integer (0 - 255) red value.
     * @param green 8 bit integer (0 - 255) green value.
     * @param blue 8 bit integer (0 - 255) blue value.
     */
    void clearScreen(u8 red, u8 green, u8 blue) {
        clearScreen(red, green, blue, 1);
    }

    /**
     * Clears the screen with GL_COLOR_BUFFER_BIT and the specified double (0 - 255) color values.
     * @param red Double (0 - 255) red value.
     * @param green Double (0 - 255) green value.
     * @param blue Double (0 - 255) blue value.
     * @param alpha Double (0 - 255) alpha value.
     */
    void clearScreen(double red, double green, double blue, float alpha) {
        clearScreen((float)(red / 255.0), (float)(green / 255.0), (float)(blue / 255.0), alpha);
    }

    /**
     * Clears the screen with GL_COLOR_BUFFER_BIT and the specified double (0 - 255) color values.
     * @param red Double (0 - 255) red value.
     * @param green Double (0 - 255) green value.
     * @param blue Double (0 - 255) blue value.
     */
    void clearScreen(double red, double green, double blue) {
        clearScreen(red, green, blue, 1);
    }
}