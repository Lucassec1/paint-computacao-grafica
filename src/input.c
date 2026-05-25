#include <stdio.h>
#include <GL/glut.h>

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 'p':
            printf("Ferramenta: Ponto\n");
            break;

        case 'l':
            printf("Ferramenta: Linha\n");
            break;

        case 'q':
            printf("Ferramenta: Quadrado\n");
            break;

        case 27:
            printf("Saindo...\n");
            break;
    }
}

void mouse(int button, int state, int x, int y)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        printf("Mouse clicado em: %d %d\n", x, y);
    }
}