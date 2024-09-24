#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;
void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-800, 500, -800, 800);
}
void circle(int theta, int h, int k)
{
    GLfloat x, y, angle;
    glBegin(GL_POLYGON);
    for (angle = 0; angle <= 360; angle += 1)
    {
        x = theta * sin(angle);
        y = theta * cos(angle);
        glVertex2i(x + h, y + k);
    }
    glEnd();
}
void Display()
{
    glColor3f(1, 0, 0);
    circle(30, -185, 300 - 128);
    glColor3f(0.00, 0.60, 0.20);
    glBegin(GL_QUADS);
    glVertex2d(-250, 300 - 55);
    glVertex2d(-120, 300 - 55);
    glVertex2d(-120, 300 - 200);
    glVertex2d(-250, 300 - 200);
    glEnd();
    glColor3f(0.45, 0.25, 0.13);
    glBegin(GL_QUADS);
    glVertex2d(-260, 300 - 465);
    glVertex2d(-260, 300 - 50);
    glVertex2d(-250, 300 - 50);
    glVertex2d(-250, 300 - 465);
    glEnd();
    glFlush();
    glutSwapBuffers();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 900);
    glutInitWindowPosition(300, 300);
    glutCreateWindow("193-15-13510");
    init();
    glutDisplayFunc(Display);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
}