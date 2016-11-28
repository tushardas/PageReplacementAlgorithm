#include<stdio.h>
#include<GL/glut.h>

extern float x[2],y[100];
extern float xb[2],yb[100],ybl[];
extern int l,choice,flag,n,stage,stagel,id1,id2,frame[10],no,a[50],count,time,bitx[50],bity[50],bitx1[10],bity1[10],avail,tempframeNum,k;
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

    if(choice == -1)
    for(int i=0;i<n;i++) frame[i] = -1;
    glColor3f(1.0,0.5,0.5);
    gprint(180,480,0,"Page Replacement Algorithms");
    gprint(175,470,0,"__________________________");



    glColor3f(1.0,1.0,0.0);
    gprint(50, 430,0,"Number of Pages  : ");
    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(140, 430 );
    char f[10];
    sprintf(f,"%d",n);
    gprint(140,430,0,f);

    glColor3f(1.0,0.0,1.0);
    gprint(50,405,0,"Reference String    : ");
    for(int i=0;i<n;i++)
    {       
            glColor3f(1.0,1.0,1.0);
            glRasterPos2i(120+20*(i+1),405 );
            glutBitmapCharacter( GLUT_BITMAP_HELVETICA_18 , a[i]+48 );
    
            //gwindowop(a[i],120+20*(i+1),405);
    }
    glColor3f(0.0,1.0,1.0); 
    gprint(50,380,0,"No of Frames         : ");
    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(140, 380 );
    glutBitmapCharacter( GLUT_BITMAP_HELVETICA_18 , no+48 );
    //gwindowop(no,140,380);
    
    gprint(40,330,0,"First In First Out");
    gprint(35,320,0,"_______________");

    gprint(280,330,0,"Least Recently Used");
    gprint(277,320,0,"__________________");

    ipage(35,100);
    page(135,135);

   ipage(275,100);
    page(375,135);

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

    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(105, 54 );
    glutBitmapCharacter( GLUT_BITMAP_HELVETICA_18 , count+48 );
    
    //gwindowop(count,105,54);
}

if(choice == 2)
{   compute();
    arrow(20,l);
    if(stagel < n)
        arrow(260,l-(stagel)*20);

    for(int k=0;k<no;k++)
    gwindowop(frame[no-k-1],bitx1[k] ,bity1[k]);

    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(355, 55 );
    glutBitmapCharacter( GLUT_BITMAP_HELVETICA_18 , count+48 );
    
}

if(flag == 1 ){
    if(stage > n-1)  gprint(50,50,0,"Process Terminated!!!" );
}


    //glColor3f(1.0,1.0,1.0);

     glColor3f(1.0,0.0,0.5);
    gprint(50,50,0,pf);
    gprint(300,50,0,pf);
    
    glColor3f(1.0,1.0,1.0);
    glRasterPos2f(5.0,5.0);
    glutBitmapString(GLUT_BITMAP_9_BY_15,"n - Next Stage!");
    
    glRasterPos2f(120.0,5.0);
    glutBitmapString(GLUT_BITMAP_9_BY_15,"1 - First In First Out!");
    
    glRasterPos2f(250.0,5.0);
    glutBitmapString(GLUT_BITMAP_9_BY_15,"2 - Least Recently Used!");

    glRasterPos2f(400.0,5.0);
    glutBitmapString(GLUT_BITMAP_9_BY_15,"RightClick - Menu");
        
    glFlush();
    glutSwapBuffers();
}
