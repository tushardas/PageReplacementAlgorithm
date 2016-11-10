#include<stdio.h>
#include<GL/glut.h>



//function to display characters on graphic window
void gwindowop(char p,GLfloat x,GLfloat y)
{
    glColor3f(1.0,1.0,1.0);
    glRasterPos2f(x,y);
    glutBitmapCharacter( GLUT_BITMAP_9_BY_15 , p + 48 );
}

