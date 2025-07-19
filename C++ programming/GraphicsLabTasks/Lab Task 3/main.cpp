#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void buildingWindows(float x1, float y1, float y2, float x2)
{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(x1, y1);
    glVertex2f(x1, y2);
    glVertex2f(x2, y2);
    glVertex2f(x2, y1);

    glEnd();
}

void building()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 191, 255);
    glVertex2f(-8, -8);
    glVertex2f(-8, 8);
    glVertex2f(8, 8);
    glVertex2f(8, -8);
    glEnd();

    buildingWindows(-5, 4.75, 6.25, -3);
    buildingWindows(3, 4.75, 6.25, 5);
    buildingWindows(-5, 1.75, 3.25, -3);
    buildingWindows(3, 1.75, 3.25, 5);
    buildingWindows(-5, -1.25, 0.25, -3);
    buildingWindows(3, -1.25, 0.25, 5);
    buildingWindows(-5, -4.25, -2.75, -3);
    buildingWindows(3, -4.25, -2.75, 5);
    buildingWindows(-5, -7.25, -5.75, -3);
    buildingWindows(3, -7.25, -5.75, 5);

    // Door
    glBegin(GL_QUADS);
    glColor3ub(153, 0, 0);
    glVertex2f(-1, -8);
    glVertex2f(-1, -5.5);
    glVertex2f(1, -5.5);
    glVertex2f(1, -8);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(-8, -8);
    glVertex2f(-8, 8);
    glVertex2f(8, 8);
    glVertex2f(8, -8);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);

    glVertex2f(-8, -5);
    glVertex2f(8, -5);

    glVertex2f(-8, -2);
    glVertex2f(8, -2);

    glVertex2f(-8, 1);
    glVertex2f(8, 1);

    glVertex2f(-8, 4);
    glVertex2f(8, 4);

    glEnd();
}

void leaves (float xc, float yc)
{
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(0, 153, 51);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        float r = 1.225;
        float x = r * cos(A) + xc;
        float y = r * sin(A) + yc;
        glVertex2f(x, y);
    }

    glEnd();
}

void tree()
{
    glBegin(GL_QUADS);
    glColor3ub(153, 77, 0);
    glVertex2f(11.65, -5.075);
    glVertex2f(12.35, -5.075);
    glVertex2f(12.7, -8);
    glVertex2f(11.3, -8);
    glEnd();

    leaves(12, -3.5);
    leaves(10.95, -4.55);
    leaves(13.05, -4.55);
}

void lamppost()
{
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-9.05, -5.355);
    glVertex2f(-8.95, -5.355);
    glVertex2f(-8.9, -8);
    glVertex2f(-9.1,-8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 179);
    glVertex2f(-9.27, -5.15);
    glVertex2f(-8.73, -5.16);
    glVertex2f(-8.82, -5.35);
    glVertex2f(-9.18, -5.35);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(102, 51, 0);
    glVertex2f(-9, -5);
    glVertex2f(-8.73, -5.16);
    glVertex2f(-9.37, -5.16);
    glEnd();
}

void bench()
{
    glPointSize(1.5);
    glLineWidth(1.0);

    glBegin(GL_QUADS);
    glColor3ub(194, 194, 214);
    glVertex2f(-11.31, -6.54);
    glVertex2f(-11.21, -6.54);
    glVertex2f(-11.21, -7.07);
    glVertex2f(-11.31, -7.07);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194, 194, 214);
    glVertex2f(-10.21, -6.54);
    glVertex2f(-10.11, -6.54);
    glVertex2f(-10.11, -7.07);
    glVertex2f(-10.21, -7.07);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-11.51, -6.54);
    glVertex2f(-9.91, -6.54);
    glVertex2f(-9.91, -6.64);
    glVertex2f(-11.51, -6.64);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(-11.51, -6.54);
    glVertex2f(-9.91, -6.54);
    glVertex2f(-9.91, -6.64);
    glVertex2f(-11.51, -6.64);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-11.51, -6.8);
    glVertex2f(-9.91, -6.8);
    glVertex2f(-9.91, -6.9);
    glVertex2f(-11.51, -6.9);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(-11.51, -6.8);
    glVertex2f(-9.91, -6.8);
    glVertex2f(-9.91, -6.9);
    glVertex2f(-11.51, -6.9);
    glEnd();

    glBegin(GL_POINTS);
    glColor3ub(1.0f, 1.0f, 1.0f);
    glVertex2f(-11.26, -6.59);
    glEnd();

    glBegin(GL_POINTS);
    glColor3ub(1.0f, 1.0f, 1.0f);
    glVertex2f(-10.16, -6.59);
    glEnd();

    glBegin(GL_POINTS);
    glColor3ub(1.0f, 1.0f, 1.0f);
    glVertex2f(-11.26, -6.85);
    glEnd();

    glBegin(GL_POINTS);
    glColor3ub(1.0f, 1.0f, 1.0f);
    glVertex2f(-10.16, -6.85);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-11.4, -7);
    glVertex2f(-10, -7);
    glVertex2f(-9.8, -7.45);
    glVertex2f(-11.6, -7.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(191, 128, 64);
    glVertex2f(-11.6, -7.45);
    glVertex2f(-9.8, -7.45);
    glVertex2f(-9.8, -7.55);
    glVertex2f(-11.6, -7.55);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(-11.6, -7.45);
    glVertex2f(-9.8, -7.45);
    glVertex2f(-9.8, -7.55);
    glVertex2f(-11.6, -7.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194, 194, 214);
    glVertex2f(-11.46, -7.54);
    glVertex2f(-11.31, -7.54);
    glVertex2f(-11.35, -8);
    glVertex2f(-11.46, -8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(194, 194, 214);
    glVertex2f(-10.11, -7.54);
    glVertex2f(-9.95, -7.54);
    glVertex2f(-9.95, -8);
    glVertex2f(-10.06, -8);
    glEnd();
}

void scenario()
{
    glClear(GL_COLOR_BUFFER_BIT);

    building();
    tree();
    lamppost();
    bench();

    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1530, 780);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Scenario");
    gluOrtho2D(-16, 16,-10, 10);
    initGL();
    glutDisplayFunc(scenario);
    glutMainLoop();
    return 0;
}
