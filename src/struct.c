#define MAX_POINTS 100

typedef enum
{
    TOOL_POINT,
    TOOL_LINE,
    TOOL_POLYGON

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