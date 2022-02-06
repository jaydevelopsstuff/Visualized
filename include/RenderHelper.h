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
    void clearScreen(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);

    /**
     * Clears the screen with GL_COLOR_BUFFER_BIT and the specified float color values.
     * @param red Clamped (0 - 1) red value.
     * @param green Clamped (0 - 1) green value.
     * @param blue Clamped (0 - 1) blue value.
     */
    void clearScreen(GLclampf red, GLclampf green, GLclampf blue);

    /**
     * Clears the screen with GL_COLOR_BUFFER_BIT and the specified 8 bit integer (0 - 255) color values.
     * @param red 8 bit integer (0 - 255) red value.
     * @param green 8 bit integer (0 - 255) green value.
     * @param blue 8 bit integer (0 - 255) blue value.
     * @param alpha 8 bit integer (0 - 255) alpha value.
     */
    void clearScreenInt(u8 red, u8 green, u8 blue, float alpha);

    /**
     * Clears the screen with GL_COLOR_BUFFER_BIT and the specified 8 bit integer (0 - 255) color values.
     * @param red 8 bit integer (0 - 255) red value.
     * @param green 8 bit integer (0 - 255) green value.
     * @param blue 8 bit integer (0 - 255) blue value.
     */
    void clearScreenInt(u8 red, u8 green, u8 blue);

    /**
     * Clears the screen with GL_COLOR_BUFFER_BIT and the specified double (0 - 255) color values.
     * @param red Double (0 - 255) red value.
     * @param green Double (0 - 255) green value.
     * @param blue Double (0 - 255) blue value.
     * @param alpha Double (0 - 255) alpha value.
     */
    void clearScreenDouble(double red, double green, double blue, float alpha);

    /**
     * Clears the screen with GL_COLOR_BUFFER_BIT and the specified double (0 - 255) color values.
     * @param red Double (0 - 255) red value.
     * @param green Double (0 - 255) green value.
     * @param blue Double (0 - 255) blue value.
     */
    void clearScreenDouble(double red, double green, double blue);
}