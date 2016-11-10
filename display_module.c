#include<stdio.h>
#include<GL/glut.h>


extern float x[2],y[100];
extern int frame[10],no;

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    ipage();
    glFlush();
    page();
    for(int k =0;k<no;k++)
    {

                glColor3f(1.0,1.0,1.0);
                int l = (x[0]+x[1])/2;
                int m = (y[k]+y[k+1])/2;

               // printf("\n\nabc=  %f, %f , %f , %f , %d , %d, %f\n" , x[0] , x[1] , y[k] , y[k+1], l , m,frame[no-k-1]);
                gwindowop(frame[no-k-1], l ,m);


    }
	    	
    glFlush();

}


