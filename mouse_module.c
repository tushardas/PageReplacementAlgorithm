#include<stdio.h>
#include<GL/glut.h>

void mymouse(int btn, int state, int xn, int yn)
{
    if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN ) //mouse event
    {
          abc();
          //gwindowop('a' , 150,150);
    }

    glutPostRedisplay();
}