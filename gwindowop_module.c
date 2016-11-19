#include<stdio.h>
#include<GL/glut.h>



//function to display characters on graphic window
void gwindowop(int p,GLfloat x,GLfloat y , int q)
{
   // printf("\n\n p = %d , x = %f , y = %f " , p,x,y);
    glColor3f(1.0,1.0,1.0);
    glRasterPos2f(y + q , x );
    glutBitmapCharacter( GLUT_BITMAP_8_BY_13 , p+48 );

}

