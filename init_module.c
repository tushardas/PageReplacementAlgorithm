#include<stdio.h>
#include<GL/glut.h>


void init()
{
    glClearColor(0.0,0.0,0.0,0.0);
    //glColor3f(1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,250,0,250);
    glMatrixMode(GL_MODELVIEW);
}

