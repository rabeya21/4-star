#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */

    //up
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(100, 200);
    glVertex2d(300, 300);//soman
    glVertex2d(100, 400);
    glVertex2d(0, 600);
    glVertex2d(-100, 400);
    glVertex2d(-300, 300);
    glVertex2d(-100, 200);
    glVertex2d(0, 0);
    glEnd();
    //left
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(-200, -100);
    glVertex2d(0, 0);//soman
    glVertex2d(-200, 100);
    glVertex2d(-300, 300);
    glVertex2d(-400, 100);
    glVertex2d(-600, 0);
    glVertex2d(-400, -100);
    glVertex2d(-300, -300);
    glEnd();

    //down
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2d(100, -400);
    glVertex2d(300, -300);//soman
    glVertex2d(100, -200);
    glVertex2d(0, 0);
    glVertex2d(-100, -200);
    glVertex2d(-300, -300);
    glVertex2d(-100, -400);
    glVertex2d(0, -600);
    glEnd();

    //right

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2d(400, -100);
    glVertex2d(600, 0);//soman
    glVertex2d(400, 100);
    glVertex2d(300, 300);
    glVertex2d(200, 100);
    glVertex2d(0, 0);
    glVertex2d(200, -100);
    glVertex2d(300, -300);
    glEnd();


    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush();
}
void init(void)
{
    /* select clearing (background) color */
    glClearColor(0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1000, 1000, -1000, 1000);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(400, 100);
    glutCreateWindow("4 Star");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}