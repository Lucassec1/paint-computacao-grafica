#include <stdio.h>
#include <GL/glut.h>
#include <stdio.h>
#include "paint.h"
#include "globals.h"

float normalizeX(int x)
{
    return (2.0f * x / WINDOW_WIDTH) - 1.0f;
}

float normalizeY(int y)
{
    return 1.0f - (2.0f * y / WINDOW_HEIGHT);
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'p':
        currentTool = TOOL_POINT;
        printf("Ferramenta: PONTO\n");
        break;

    case 'l':
        currentTool = TOOL_LINE;
        printf("Ferramenta: LINHA\n");
        break;

    case 'g':
        currentTool = TOOL_POLYGON;
        printf("Ferramenta: POLIGONO\n");
        break;
    }
}

void mouse(int button, int state, int x, int y)
{
    if (button != GLUT_LEFT_BUTTON)
        return;

    if (state != GLUT_DOWN)
        return;

    if (currentTool == TOOL_POINT)
    {
        Shape point;

        point.tool = TOOL_POINT;

        point.color.r = 1;
        point.color.g = 0;
        point.color.b = 0;

        point.totalPoints = 1;

        point.points[0].x = normalizeX(x);
        point.points[0].y = normalizeY(y);

        shapes[totalShapes++] = point;

        glutPostRedisplay();
    }

    if (currentTool == TOOL_LINE)
    {
        float nx = normalizeX(x);
        float ny = normalizeY(y);

        if (waitingSecondPoint == 0)
        {
            firstLinePoint.x = nx;
            firstLinePoint.y = ny;

            waitingSecondPoint = 1;

            printf("Primeiro ponto salvo\n");
        }
        else
        {
            Shape line;

            line.tool = TOOL_LINE;

            line.color.r = 0;
            line.color.g = 0;
            line.color.b = 1;

            line.totalPoints = 2;

            line.points[0] = firstLinePoint;

            line.points[1].x = nx;
            line.points[1].y = ny;

            shapes[totalShapes++] = line;

            waitingSecondPoint = 0;

            glutPostRedisplay();

            printf("Linha criada\n");
        }
    }
}