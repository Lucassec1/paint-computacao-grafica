#include <GL/glut.h>
#include "paint.h"

void drawShape(Shape shape)
{
    glColor3f(
        shape.color.r,
        shape.color.g,
        shape.color.b);

    switch (shape.tool)
    {
    case TOOL_POINT:

        glPointSize(8);

        glBegin(GL_POINTS);

        glVertex2f(
            shape.points[0].x,
            shape.points[0].y);

        glEnd();

        break;

    case TOOL_LINE:

        glBegin(GL_LINES);

        glVertex2f(
            shape.points[0].x,
            shape.points[0].y);

        glVertex2f(
            shape.points[1].x,
            shape.points[1].y);

        glEnd();

        break;
    }
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i < totalShapes; i++)
    {
        drawShape(shapes[i]);
    }

    glFlush();
}