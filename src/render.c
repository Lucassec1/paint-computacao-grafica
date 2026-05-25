#include <GL/glut.h>

void drawPoint()
{
    glPointSize(10.0);

    glBegin(GL_POINTS);

        glVertex2f(0.0, 0.0);

    glEnd();
}

void drawLine()
{
    glBegin(GL_LINES);

        glVertex2f(-0.5, 0.0);
        glVertex2f(0.5, 0.0);

    glEnd();
}

void drawSquare()
{
    glBegin(GL_QUADS);

        glVertex2f(-0.2, -0.2);
        glVertex2f(0.2, -0.2);
        glVertex2f(0.2, 0.2);
        glVertex2f(-0.2, 0.2);

    glEnd();
}

void drawPolygon()
{
    glBegin(GL_POLYGON);

        glVertex2f(-0.2, -0.2);
        glVertex2f(0.2, -0.2);
        glVertex2f(0.3, 0.1);
        glVertex2f(0.0, 0.3);
        glVertex2f(-0.3, 0.1);

    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0, 0.0, 0.0);

    drawPoint();
    drawLine();
    drawSquare();
    drawPolygon();

    glFlush();
}