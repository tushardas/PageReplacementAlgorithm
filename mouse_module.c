#include<stdio.h>
#include<GL/glut.h>
extern int stage,n,count,flag,no,frame[];
int choice = -1;
void mymouse(int btn, int state, int x, int y)
{
    if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN ) //mouse event
    {
        flag =1;
        count =0;
           choice = 1;         
           for(int i=0;i<n;i++) frame[i] = -1;
    }

    
    if (btn == GLUT_RIGHT_BUTTON && state == GLUT_DOWN ) //mouse event
    {
        flag =2;
        count =0;
           choice = 2; 
           for(int i=0;i<n;i++) frame[i] = -1;
           
    }


}