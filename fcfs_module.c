#include<stdio.h>
#include<GL/glut.h>


//fcfs algorithm
int tempframeNum;
extern int a[50],avail,no,k,frame[10],frameNum,count,n,bitx[50],bity[50],bitx1[10],bity1[10];
void fcfs(int stage)
{
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

                }
                glutPostRedisplay();
        }
        if (avail==0)
        {
                frame[frameNum]=a[stage];
                tempframeNum = frameNum;
                frameNum=(frameNum+1)%no;
                count++;
                for(k=0;k<no;k++)
                	printf("%d\t",frame[k]);
               
        }
	printf("\n");
	printf("Page Fault Is %d\n\n",count);
        gwindowopf(a[stage],bitx[n-stage-1],bity[n-stage-1],bitx1[no-tempframeNum-1],bity1[no-tempframeNum-1]);
        //stage++;
        //glutPostRedisplay();
       // gwindowopf(a[stage],bitx[n-stage-1],bity[n-stage-1],bitx1[no-k-1],bity1[no-k-1]);
        
       // gwindowopf(,2000,2000,2000,2000);
}


