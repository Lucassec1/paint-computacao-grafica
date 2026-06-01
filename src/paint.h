#ifndef PAINT_H
#define PAINT_H

#include "structs.h"

extern Shape shapes[MAX_SHAPES];
extern int totalShapes;

extern Tool currentTool;

extern Point firstLinePoint;
extern int waitingSecondPoint;

extern Point lineStart;
extern Point lineEnd;

extern int drawingLine;

#endif