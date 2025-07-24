#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <windows.h>

bool isDay = true;

void leaves (float xc, float yc)
{
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3ub(0, 153, 51);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        float r = 1.35;
        float x = r * cos(A) + xc;
        float y = r * sin(A) + yc;
        glVertex2f(x, y);
    }

    glEnd();
}

void renderDayScene()
{
    glClearColor(0.5f, 0.8f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //sun
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(2.25 * cos(angle) - 9, 2.25 * sin(angle) + 8.5);
    }
    glEnd();

    //cloud center
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(1 * cos(angle) - 2.7f, 1 * sin(angle) + 9.4f);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.8f * cos(angle) - 1.9f, 0.8f * sin(angle) + 10.6f);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(1.4f * cos(angle) - 1, 1.4f * sin(angle) + 9.7f);
    }
    glEnd();

    //cloud right
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(1.3 * cos(angle) + 6.6f, 1.3 * sin(angle) + 8.4f);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(1.2f * cos(angle) + 7.7f, 1.4f * sin(angle) + 9.5f);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(1.4f * cos(angle) + 9.6f, 1.4f * sin(angle) + 9.1f);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.8f * cos(angle) + 8.2f, 0.8f * sin(angle) + 8.1f);
    }
    glEnd();

    //tree
    glBegin(GL_QUADS);
    glColor3ub(153, 77, 0);
    glVertex2f(-1.1, -10.5);
    glVertex2f(1.1, -10.5);
    glVertex2f(0.45, -4.9);
    glVertex2f(-0.45, -4.9);
    glEnd();

    //tree leaves
    leaves(-0.93, -4.91);
    leaves(0, -3.91);
    leaves(1.07, -4.91);

    glFlush();
}

void renderNightScene()
{
    glClearColor(0.0f, 0.0f, 0.2f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //moon
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(2.25 * cos(angle) - 9, 2.25 * sin(angle) + 8.5);
    }
    glEnd();

    //stars
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POINTS);
    glVertex2f(-5.62f, 7.63f);
    glVertex2f(-5.65f, 11.02f);
    glVertex2f(-3.3f, 7.09f);
    glVertex2f(-3.36f, 12.04f);
    glVertex2f(-4.25f, 9.55f);
    glVertex2f(1.56f, 11.36f);
    glVertex2f(0.94f, 8.73f);
    glVertex2f(2.72f, 8.86f);
    glVertex2f(4.26f, 11.36f);
    glVertex2f(3.23f, 7.98f);
    glVertex2f(4, 10);
    glVertex2f(6.78f, 11.43f);
    glEnd();

    //cloud center
    glColor3ub(122, 122, 122);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(1 * cos(angle) - 2.7f, 1 * sin(angle) + 9.4f);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.8f * cos(angle) - 1.9f, 0.8f * sin(angle) + 10.6f);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(1.4f * cos(angle) - 1, 1.4f * sin(angle) + 9.7f);
    }
    glEnd();

    //cloud right
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(1.3 * cos(angle) + 6.6f, 1.3 * sin(angle) + 8.4f);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(1.2f * cos(angle) + 7.7f, 1.4f * sin(angle) + 9.5f);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(1.4f * cos(angle) + 9.6f, 1.4f * sin(angle) + 9.1f);
    }
    glEnd();
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.8f * cos(angle) + 8.2f, 0.8f * sin(angle) + 8.1f);
    }
    glEnd();

    //tree
    glBegin(GL_QUADS);
    glColor3ub(153, 77, 0);
    glVertex2f(-1.1, -10.5);
    glVertex2f(1.1, -10.5);
    glVertex2f(0.45, -4.9);
    glVertex2f(-0.45, -4.9);
    glEnd();

    //tree leaves
    leaves(-0.93, -4.91);
    leaves(0, -3.91);
    leaves(1.07, -4.91);

    glFlush();
}

void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'D':
        isDay = true;
        break;
    case 'd':
        isDay = true;
        break;
    case 'N':
        isDay = false;
    case 'n':
        isDay = false;
    }
    glutPostRedisplay();
}

void init()
{
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-12, 12, -12, 12);
}

void display()
{
    if (isDay)
    {
        renderDayScene();
        return;
    }
    renderNightScene();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(740, 620);
    glutInitWindowPosition(300, 100);
    glutCreateWindow("Sunrise with Keyboard Simulation");

    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();
}
