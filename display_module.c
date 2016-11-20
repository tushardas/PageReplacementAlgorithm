#include<stdio.h>
#include<GL/glut.h>

extern float x[2],y[100];
extern float xb[2],yb[100];
extern int n,stage,frame[10],no,a[50],count,time;
int j =0;
char name[] = "First Come\n First Serve";
char pf[] = "Page Fault is:- ";
char c[2];
int k1 = 20, l= 400;
    int e = 20;
    

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(1.0,0.0,0.5);
    
    glBegin(GL_LINES);
    glVertex2i(220,400);
    glVertex2i(220,10);
    glEnd();
    
    gprint(325,75,0,pf);
    ipage();
    glFlush();
    page();
    //arrow(0);
    //arrow(1);

    if(stage > n)  gprint(325,30,0,"Process Terminated!!!" );
  
    for(int k =0;k<no;k++)
    {

                glColor3f(1.0,1.0,1.0);
                int l = (x[0]+x[1])/2;
                int m = (y[k]+y[k+1])/2;
                gwindowop(frame[no-k-1], l ,m,150);

    }

    
        
    
    gprint(150,450,0,name);

    glColor3f(1.0,1.0,1.0);
    
    /*c[0] = count+48;
    c[1] = '\0';*/
    char m[3] = {""};
    m[0] = count/10 + 48;
    m[1] = count%10 + 48;

    //if((cnt-1)%10 == 0)  k+=20;
    gprint(410,75,0,m);
    //glScissor(xb[stage],yb[stage],xb[stage+1],yb[stage+1]);
        glTranslatef(k1+e,l,0);
        gprint(20,400,0,name);
        e+=10;
        for(int h=0;h<5000;h++);
        //for(int h=0;h<INT_LEAST32_MAX;h++);
        //for(int h=0;h<INT_LEAST32_MAX;h++);
        //for(int h=0;h<INT_LEAST32_MAX;h++);
    
    glFlush();

}
