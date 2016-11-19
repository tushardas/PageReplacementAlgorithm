#include<stdio.h>
#include<GL/glut.h>

extern float x[2],y[100];
extern int n,stage,frame[10],no,a[50],count;
int j =0;
char name[] = "First Come\n First Serve";
char pf[] = "Page Fault is:- ";
char c[2];
c[1] = "\0";
void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gprint(200,400,0,name);
    gprint(200,100,0,pf);
    ipage();
    glFlush();
    page();
    //arrow(0);
    //arrow(1);
    
    if(stage > n)  gprint(250,50,0,"Process Terminated!!!" );
  
    for(int k =0;k<no;k++)
    {

                glColor3f(1.0,1.0,1.0);
                int l = (x[0]+x[1])/2;
                int m = (y[k]+y[k+1])/2;
                gwindowop(frame[no-k-1], l ,m,150);

    }

    glColor3f(1.0,1.0,1.0);
    c[0] = count+48;
    gprint(200,150,0,c);

    glFlush();

}
