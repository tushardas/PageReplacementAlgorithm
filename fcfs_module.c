#include<stdio.h>
#include<GL/glut.h>


//fcfs algorithm
extern int a[50],avail,no,k,frame[10],frameNum,count;
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
}


