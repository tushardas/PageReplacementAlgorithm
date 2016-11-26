#include<stdio.h>
#include<GL/glut.h>

extern float x[2],y[100];
extern float xb[2],yb[100],ybl[];
extern int l,choice,flag,n,stage,stagel,frame[10],no,a[50],count,time,bitx[50],bity[50],bitx1[10],bity1[10],avail,tempframeNum,k;
int j =0;
char name[][23] = {{"First In First Out"},{"Least Recently Used"}};
char pf[] = "Page Fault:- ";
char underline[] = "_________________";
char c[2];
int k1 = 20, l= 400;
    int e = 20;
    

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(1.0,0.5,0.5);
    gprint(180,450,0,"Page Replacement Algorithms");
    gprint(180,435,0,underline);

    glColor3f(1.0,1.0,0.0);
    gprint(50, 390,0,"Number of Pages  : ");
    gwindowop(n,140,390);

    glColor3f(1.0,0.0,1.0);
    gprint(50,360,0,"Reference String    : ");
    for(int i=0;i<n;i++)
        gwindowop(a[i],120+20*(i+1),360);
    
    glColor3f(0.0,1.0,1.0); 
    gprint(50,330,0,"No of Frames         : ");
    gwindowop(no,140,330);
    
    gprint(40,300,0,"First In First Out");
    gprint(40,290,0,"__________________");

    gprint(280,300,0,"Least Recently Used");
    gprint(280,290,0,"__________________");

    ipage(35,100);
    page(135,105);

   ipage(275,100);
    page(375,105);

if(choice<1)
{
     arrow(260,l);   
     arrow(20,l);
}    
if(choice == 1)
{   compute();
    arrow(260,l);
    if(stage < n)
        arrow(20,l-stage*20);

    for(int k=0;k<no;k++)
    gwindowop(frame[no-k-1],bitx1[k] ,bity1[k]);

    gwindowop(count,120,70);
}

if(choice == 2)
{   compute();
    arrow(20,l);
    if(stage < n)
        arrow(260,l-stagel*20);

    for(int k=0;k<no;k++)
    gwindowop(frame[no-k-1],bitx1[k] ,bity1[k]);

    gwindowop(count,370,60);
}

if(flag == 1 ){
    if(stage > n-1)  gprint(50,50,0,"Process Terminated!!!" );
}


    //glColor3f(1.0,1.0,1.0);

     glColor3f(1.0,0.0,0.5);
    gprint(50,60,0,pf);
    gprint(300,60,0,pf);
    
    
        
    glFlush();
    glutSwapBuffers();
}
