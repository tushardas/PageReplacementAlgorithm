#include<stdio.h>
#include<GL/glut.h>

extern float x[2],y[100];
extern float xb[2],yb[100];
extern int flag,n,stage,frame[10],no,a[50],count,time,bitx[50],bity[50],bitx1[10],bity1[10],avail,tempframeNum,k;
int j =0;
char name[] = "First In First Out";
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
    menu();
    page();
    //arrow(0);
    //arrow(1);

if(flag == 1 ){
    arrow(90,50);
        for(int k=0;k<no;k++)
        {
            bitx1[k] = (x[0]+x[1])/2;
                bity1[k] = (y[k]+y[k+1])/2;
        }
    for(int k =0;k<no;k++)
    {

                glColor3f(1.0,1.0,1.0);
                
                
                if((tempframeNum == k) && !avail)
                        gwindowopf(a[stage],bitx[n-stage-1],bity[n-stage-1],bitx1[no-k-1],bity1[no-k-1]);
                 
                 
                // for(int z=0;z<no;z++)
                 gwindowop(frame[no-k-1],bitx1[k] ,bity1[k]);
                 
                 

                
                
               
    }
    stage++;}
       /* glRasterPos2f(440,70); 
        glutBitmapCharacter( GLUT_BITMAP_8_BY_13 , 7+48 );
*/

    if(stage > n-1)  gprint(325,30,0,"Process Terminated!!!" );
    
  /*      


	printf("\tref string\t page frames\n");
        printf("\n");
	printf("%d\t",a[stage]);
        avail=0;
        for(k=0;k<no;k++)
        {
        	if(frame[k]==a[stage])
                {
                    avail=1;
                    for(k=0;k<no;k++)
                        printf("%d\t",frame[k]);
                        gwindowop(frame[no-k-1],bitx1[k] ,bity1[k],150);

                }

        }
        
        if (avail==0)
        {
                frame[frameNum]=a[stage];
                frameNum=(frameNum+1)%no;                
                count++;
                for(k=0;k<no;k++)
                	printf("%d\t",frame[k]);
                    
        }
	printf("\n");
	printf("Page Fault Is %d\n\n",count);
*/



    gprint(300,450,0,name);

    glColor3f(1.0,1.0,1.0);
    
    c[0] = count+48;
    c[1] = '\0';
    char m[3] = {""};
    m[0] = count/10 + 48;
    m[1] = count%10 + 48;

    //if((cnt-1)%10 == 0)  k+=20;
    gprint(410,75,0,m);
        //gprint(20,400,0,name);
        
    glFlush();
    glutSwapBuffers();
}
