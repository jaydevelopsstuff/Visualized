#include "RenderHelper.h"

void Visualized::clearScreen(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
    glClearColor(red, green, blue, alpha);
    glClear(GL_COLOR_BUFFER_BIT);
}

void Visualized::clearScreen(GLclampf red, GLclampf green, GLclampf blue) {
    clearScreen(red, green, blue, 1);
}

void Visualized::clearScreenInt(u8 red, u8 green, u8 blue, float alpha) {
    clearScreen((float)((float)red / 255.0), (float)((float)green / 255.0), (float)((float)blue / 255.0), alpha);
}

void Visualized::clearScreenInt(u8 red, u8 green, u8 blue) {
    clearScreenInt(red, green, blue, 1);
}

void Visualized::clearScreenDouble(double red, double green, double blue, float alpha) {
    clearScreen((float)(red / 255.0), (float)(green / 255.0), (float)(blue / 255.0), alpha);
}

void Visualized::clearScreenDouble(double red, double green, double blue) {
    clearScreenDouble(red, green, blue, 1);
}


