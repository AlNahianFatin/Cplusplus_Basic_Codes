#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;

float angle = 0.0f;

void quadrilateral(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
    //stand
    glBegin(GL_QUADS);
    glColor3ub(166, 166, 166);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glVertex2f(x4, y4);
    glEnd();

    //border
    glBegin(GL_LINE_LOOP);
    glColor3f(0, 0, 0);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glVertex2f(x4, y4);
    glEnd();
}

void windmillblades()
{
    float xc = 0;
    float yc = 3.9;

    float d1 = 0.6;
    float d2 = 1.6;

    float base_angle = angle * 3.1416f / 180.0f;

    for (int i = 0; i < 3; ++i)
    {
        float offset = i * 120.0f * 3.1416f / 180.0f;
        float rot_angle = base_angle + offset;

        float x1 = xc;
        float y1 = yc + 6.1;

        float x2 = xc + d1;
        float y2 = yc + d2;

        float x1r = xc + (x1 - xc) * cos(rot_angle) - (y1 - yc) * sin(rot_angle);
        float y1r = yc + (x1 - xc) * sin(rot_angle) + (y1 - yc) * cos(rot_angle);

        float x2r = xc + (x2 - xc) * cos(rot_angle) - (y2 - yc) * sin(rot_angle);
        float y2r = yc + (x2 - xc) * sin(rot_angle) + (y2 - yc) * cos(rot_angle);

        //blades
        glBegin(GL_TRIANGLES);
        glColor3ub(0, 77, 128);
        glVertex2f(xc, yc);
        glVertex2f(x1r, y1r);
        glVertex2f(x2r, y2r);
        glEnd();

        //borders
        glBegin(GL_LINE_LOOP);
        glColor3f(0, 0, 0);
        glVertex2f(xc, yc);
        glVertex2f(x1r, y1r);
        glVertex2f(x2r, y2r);
        glEnd();
    }
}

void windmill()
{
    glClearColor(0.2, 0.52, 1, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();

    //stands
    quadrilateral(-1, -4, 1, -4, 0.6, 3, -0.6, 3);
    quadrilateral(-0.6, 3, 0.6, 3, 0.6, 3.6, -0.6, 3.6);
    quadrilateral(-0.8, 3.6, 0.8, 3.6, 0.8, 4.2, -0.8, 4.2);

    //blades holding motor
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(1, 1, 1);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        glVertex2f(cos(A) * 0.25, sin(A) * 0.25 + 3.9);
    }
    glEnd();

    windmillblades();

    glPopMatrix();
    glutSwapBuffers();
}

void update(int value)
{
    angle -= (0.005 / 0.1) * (180.0 / 3.1416);

    if (angle < -360.0f)
        angle += 360.0f;

    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(720, 520);
    glutInitWindowPosition(500, 160);
    glutCreateWindow("Windmill with Rotating Blades");

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-15, 15, -5, 11);

    glutDisplayFunc(windmill);
    glutTimerFunc(20, update, 0);
    glutMainLoop();
    return 0;
}
