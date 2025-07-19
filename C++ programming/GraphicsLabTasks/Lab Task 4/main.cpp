#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void lines(float x1, float y1, float x2, float y2)
{
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glEnd();
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(1.5);

    glBegin(GL_LINE_LOOP);
    glColor3f(0, 0, 0);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.0, 0.0, 0.0);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        glVertex2f(cos(A) * 0.317 + 0, sin(A) * 0.317 + 0.28);
    }
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.286, 0.125);
    glVertex2f(0.232, 0.051);
    glVertex2f(0.066, -0.17);
    glVertex2f(-0.354, 0.038);
    glEnd();

    lines(-0.8, -0.33, 0.8, -0.33);

    lines(-0.6, 0, -0.6, -0.33);
    lines(-0.6, 0, -0.66, -0.05);
    lines(-0.6, 0, -0.55, -0.05);
    lines(-0.6, -0.1, -0.66, -0.15);
    lines(-0.6, -0.1, -0.55, -0.15);
    lines(-0.6, -0.2, -0.66, -0.25);
    lines(-0.6, -0.2, -0.55, -0.25);

    lines(0.6, 0, 0.6, -0.33);
    lines(0.6, 0, 0.66, -0.05);
    lines(0.6, 0, 0.55, -0.05);
    lines(0.6, -0.1, 0.66, -0.15);
    lines(0.6, -0.1, 0.55, -0.15);
    lines(0.6, -0.2, 0.66, -0.25);
    lines(0.6, -0.2, 0.55, -0.25);

    glBegin(GL_LINE_LOOP);
    glColor3f(0, 0, 0);
    glVertex2f(-0.6, -0.33);
    glVertex2f(-0.51, -0.28);
    glVertex2f(-0.45, -0.22);
    glVertex2f(-0.37, -0.05);
    glVertex2f(-0.29, 0.083);
    glVertex2f(-0.23, 0.15);
    glVertex2f(-0.17, 0.21);
    glVertex2f(0, 0.28);
    glVertex2f(0.044, 0.226);
    glVertex2f(0.116, 0.181);
    glVertex2f(0.128, 0.099);
    glVertex2f(0.195, 0.047);
    glVertex2f(0.281, -0.07);
    glVertex2f(0.417, -0.206);
    glVertex2f(0.6, -0.33);
    glEnd();

    lines(0, 0.28, -0.0338, 0.227);
    lines(-0.0338, 0.227, 0.01, 0.2);
    lines(0.01, 0.2, 0.02, 0.17);
    lines(0.02, 0.17, 0.06, 0.14);
    lines(0.06, 0.14, 0.05, 0.1);
    lines(0.05, 0.1, 0.03, 0.08);
    lines(0.03, 0.08, 0.02, 0.04);
    lines(0.02, 0.04, 0.04, 0.02);
    lines(0.04, 0.02, 0.01, -0.01);
    lines(0.01, -0.01, -0.04, -0.08);
    lines(-0.04, -0.08, -0.07, -0.15);
    lines(-0.121, -0.256, -0.16, -0.33);

    lines(-0.143, 0.187, -0.037, 0.187);
    lines(-0.168, 0.135, -0.057, 0.135);
    lines(-0.207, 0.095, -0.032, 0.095);
    lines(-0.17, 0.048, -0.064, 0.048);
    lines(-0.263, 0.013, -0.03, 0.013);
    lines(-0.32, -0.044, -0.071, -0.044);
    lines(-0.327, -0.105, -0.093, -0.108);
    lines(-0.381, -0.189, -0.138, -0.189);
    lines(-0.405, -0.253, -0.158, -0.253);
    lines(-0.468, -0.307, -0.168, -0.307);

    lines(-0.377, 0.5, -0.142, 0.5);
    lines(0.165, 0.42, 0.415, 0.42);
    lines(-0.406, 0.18, -0.265, 0.18);
    lines(0.247, 0.165, 0.359, 0.165);

    lines(-0.8, -0.58, -0.8, -0.415);
    lines(-0.8, -0.415, -0.72, -0.58);
    lines(-0.72, -0.58, -0.64, -0.415);
    lines(-0.64, -0.415, -0.64, -0.58);

    glBegin(GL_LINE_LOOP);
    glColor3f(0, 0, 0);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.0, 0.0, 0.0);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        glVertex2f(cos(A) * 0.09 + -0.51, sin(A) * 0.09 + -0.5);
    }
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0, 0, 0);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.0, 0.0, 0.0);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        glVertex2f(cos(A) * 0.07 + -0.316, sin(A) * 0.07 + -0.52);
    }
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.386, -0.52);
    glVertex2f(-0.386, -0.4);
    glVertex2f(-0.246, -0.4);
    glVertex2f(-0.246, -0.52);
    glEnd();
    lines(-0.386, -0.52, -0.386, -0.415);
    lines(-0.246, -0.52, -0.246, -0.415);

    lines(-0.176, -0.58, -0.176, -0.415);
    lines(-0.176, -0.415, -0.056, -0.58);
    lines(-0.056, -0.58, -0.056, -0.415);

    lines(0, -0.413, 0.168, -0.413);
    lines(0.084, -0.415, 0.084, -0.58);

    lines(0.195, -0.58, 0.27, -0.415);
    lines(0.27, -0.415, 0.345, -0.58);
    lines(0.23, -0.5, 0.31, -0.5);

    lines(0.405, -0.58, 0.405, -0.415);

    lines(0.476, -0.58, 0.476, -0.415);
    lines(0.476, -0.415, 0.6, -0.58);
    lines(0.6, -0.58, 0.6, -0.415);

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(740, 620);
    glutCreateWindow("OpenGL Setup Test");
    gluOrtho2D(-1, 1, -1, 1);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
