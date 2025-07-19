#include <windows.h>
#include <GL/glut.h>
#include <time.h>
#include <math.h>
#include "glutil.h"

#define NUM_RAINDROPS 200
#define WINDOW_WIDTH 32
#define WINDOW_HEIGHT 20

float rainX[NUM_RAINDROPS];
float rainY[NUM_RAINDROPS];
float rainSpeed[NUM_RAINDROPS];

float floodHeight = 0.0f;

void initRain()
{
    for (int i = 0; i < NUM_RAINDROPS; i++)
    {
        rainX[i] = (rand() % WINDOW_WIDTH) - (WINDOW_WIDTH / 2);
        rainY[i] = rand() % WINDOW_HEIGHT;
        rainSpeed[i] = 2 + rand() % 3;
    }
}

void updateRain()
{
    for (int i = 0; i < NUM_RAINDROPS; i++)
    {
        rainY[i] -= rainSpeed[i] * 0.2;
        if (rainY[i] < -WINDOW_HEIGHT / 2)
        {
            rainY[i] = WINDOW_HEIGHT / 2;
            rainX[i] = (rand() % WINDOW_WIDTH) - (WINDOW_WIDTH / 2);
        }
    }
}

void drawRaindrops()
{
    glColor3f(0.2f, 0.4f, 1.0f);
    glBegin(GL_LINES);
    for (int i = 0; i < NUM_RAINDROPS; i++)
    {
        glVertex2f(rainX[i], rainY[i]);
        glVertex2f(rainX[i], rainY[i] - 1);
    }
    glEnd();
}

void drawFlood()
{
    glColor3f(0.2f, 0.5f, 0.8f);
    glBegin(GL_QUADS);
    glVertex2f(-WINDOW_WIDTH / 2, -WINDOW_HEIGHT / 2);
    glVertex2f(WINDOW_WIDTH / 2, -WINDOW_HEIGHT / 2);
    glVertex2f(WINDOW_WIDTH / 2, -WINDOW_HEIGHT / 2 + floodHeight);
    glVertex2f(-WINDOW_WIDTH / 2, -WINDOW_HEIGHT / 2 + floodHeight);
    glEnd();
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

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    building();
    tree();

    drawRaindrops();
    drawFlood();

    staticText("HI", 5, 5, 1, 1, 1, 0, 0);

    glutSwapBuffers();
}

void timer(int value)
{
    updateRain();

    if (floodHeight < (WINDOW_HEIGHT/3))
        floodHeight += 0.08f;
    else
        floodHeight = 0.0f;

    glutPostRedisplay();
    glutTimerFunc(16, timer, 0);
}

void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-WINDOW_WIDTH / 2, WINDOW_WIDTH / 2, -WINDOW_HEIGHT / 2, WINDOW_HEIGHT / 2);

    glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
    srand(time(0));
    initRain();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1530, 780);
    glutInitWindowPosition(300, 100);
    glutCreateWindow("Rain and Flood");

    init();
    glutDisplayFunc(display);
    glutTimerFunc(0, timer, 0);
    glutMainLoop();
    return 0;
}
