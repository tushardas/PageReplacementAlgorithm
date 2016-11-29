#include<stdio.h>
#include<GL/glut.h>


void init()
{
    glClearColor(0.2,0.1,0.4,1.0);
    //glColor3f(1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
    glMatrixMode(GL_MODELVIEW);
}

