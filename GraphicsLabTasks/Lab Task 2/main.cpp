#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void initGL() {
    glClearColor(0.8f, 0.9f, 1.0f, 1.0f);
}

void drawRectangle(float x1, float y1, float x2, float y2, float r, float g, float b) {
    glColor3f(r, g, b);
    glBegin(GL_QUADS);
    glVertex2f(x1, y1); glVertex2f(x2, y1);
    glVertex2f(x2, y2); glVertex2f(x1, y2);
    glEnd();
}

void drawCircle(float cx, float cy, float radius, float r, float g, float b) {
    glColor3f(r, g, b);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++) {
        float angle = 2.0f * 3.14159f * i / 100;
        float x = cx + radius * cos(angle);
        float y = cy + radius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
}

void drawArrow() {
    drawRectangle(-0.05f, 0.1f, 0.05f, 0.5f, 1.0f, 0.0f, 0.0f);

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.15f, 0.5f);
    glVertex2f(0.15f, 0.5f);
    glVertex2f(0.0f, 0.7f);
    glEnd();
}

void drawGear() {
    drawCircle(0.0f, 0.0f, 0.2f, 0.4f, 0.6f, 1.0f);
    drawCircle(0.0f, 0.0f, 0.08f, 1.0f, 1.0f, 1.0f);
}

void drawLines() {
    glColor3f(0.0f, 0.0f, 0.0f);
    glLineWidth(3);

    glBegin(GL_LINES);
    glVertex2f(0.0f, -0.2f); glVertex2f(0.0f, -0.6f);
    glVertex2f(-0.4f, -0.6f); glVertex2f(0.4f, -0.6f);

    glVertex2f(-0.4f, -0.6f); glVertex2f(-0.4f, -0.8f);
    glVertex2f(0.0f, -0.6f); glVertex2f(0.0f, -0.8f);
    glVertex2f(0.4f, -0.6f); glVertex2f(0.4f, -0.8f);
    glEnd();
}

void drawBlocks() {
    drawRectangle(-0.5f, -0.8f, -0.3f, -1.0f, 1.0f, 0.8f, 0.4f);
    drawRectangle(-0.1f, -0.8f, 0.1f, -1.0f, 1.0f, 0.8f, 0.4f);
    drawRectangle(0.3f, -0.8f, 0.5f, -1.0f, 1.0f, 0.8f, 0.4f);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawArrow();
    drawGear();
    drawLines();
    drawBlocks();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Flowchart Representation");
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(50, 50);
    initGL();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
