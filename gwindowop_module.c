#include<stdio.h>
#include<GL/glut.h>
extern int flag,stage;
//function to display characters on graphic window
void gwindowop(int p,int x,int y)
{

    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(x, y );
    glutBitmapCharacter( GLUT_BITMAP_8_BY_13 , p+48 );
}
void gwindowopf(int p,int x,int y ,int x1,int y1)
{
    float i,delx,dely,yu,xu;
    float m;
    m = ((float)(y1-y)/(float)(x1-x));
    delx = (x1-x)/2;
    glColor3f(1.0,1.0,1.0);
    for(i=1;i<2;i++){
        
        xu = x+i*delx;
        yu = m*(xu-x)+y;
        
        
        glColor3f(1.0,1.0,1.0);
        glRasterPos2f(xu , yu);
        glutBitmapCharacter( GLUT_BITMAP_8_BY_13 , p+48 );
        glFlush();
        glutSwapBuffers();
        for(int t=0;t<1000;t++)
        for(int q=0;q<1000;q++)
        for(int z=0;z<100;z++);
        glColor3f(0.2,0.1,0.4);
        glRasterPos2f(xu,yu);
        glutBitmapCharacter( GLUT_BITMAP_8_BY_13 , p+48 );
        
        
    }   
    
        
    flag = 0;
    stage++;
    glutPostRedisplay();
    
}