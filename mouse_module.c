#include<stdio.h>
#include<GL/glut.h>
extern int stage,n,flag;
void mymouse(int btn, int state, int x, int y)
{
    if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x <=1500 && x>=750 ) //mouse event
    {
        if(stage < n)
        {  abc();
            flag = 1;
            
          glutPostRedisplay();
        }
          
    }

    /*if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x <=50 && x>=20 && y<=300 && y>=200 ) //mouse event
    {
           gprint(20,500,0,"abcd");
           printf("abcd");
    }*/

    
}