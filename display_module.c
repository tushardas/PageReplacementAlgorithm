#include<stdio.h>
#include<GL/glut.h>

extern float x[2],y[100];
extern float xb[2],yb[100];
extern int choice,flag,n,stage,frame[10],no,a[50],count,time,bitx[50],bity[50],bitx1[10],bity1[10],avail,tempframeNum,k;
int j =0;
char name[][23] = {{"First In First Out"},{"Least Recently Used"}};
char pf[] = "Page Fault is:- ";
char underline[] = "_________________";
char c[2];
int k1 = 20, l= 400;
    int e = 20;
    

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(1.0,0.0,0.5);
    
    /*glBegin(GL_LINES);
        glVertex2i(220,400);
        glVertex2i(220,10);
    glEnd();
    */
    gprint(180,125,0,pf);
    ipage();
   // menu();
    page();
    //arrow(0);
    //arrow(1);


    

for(int k=0;k<no;k++)
    gwindowop(frame[no-k-1],bitx1[k] ,bity1[k]);
if(stage < n)
    arrow(35,(int)yb[n-stage-1]+10);
if(flag == 1 ){

    
    /*for(int k =0;k<no;k++)
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

    if(stage > n-1)  gprint(140,80,0,"Process Terminated!!!" );
    
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

}

    gprint(120,450,0,name[0]);
    gprint(115,440,0,underline);
    

    glColor3f(1.0,1.0,1.0);
    
    c[0] = count+48;
    c[1] = '\0';
    char m[3] = {""};
    m[0] = count/10 + 48;
    m[1] = count%10 + 48;

    //if((cnt-1)%10 == 0)  k+=20;
    gprint(260,125,0,m);
        //gprint(20,400,0,name);
        
    glFlush();
    glutSwapBuffers();
}
