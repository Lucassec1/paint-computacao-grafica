#ifndef STRUCTS_H
#define STRUCTS_H

#define MAX_POINTS 100
#define MAX_SHAPES 1000

typedef enum
{
    TOOL_POINT,
    TOOL_LINE,
    TOOL_SQUARE,
    TOOL_POLYGON,
    TOOL_SELECTION

} Tool;

typedef struct
{
    float r;
    float g;
    float b;

} Color;

typedef struct
{
    float x;
    float y;

} Point;

typedef struct
{
    Tool tool;
    Color color;
    int totalPoints;
    Point points[MAX_POINTS];

} Shape;

#endif