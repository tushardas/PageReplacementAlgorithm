#include<stdio.h>
#include<GL/glut.h>


extern int stage,n,no,frame[10];

void abc()
{		
		
     	if(stage >= n)
            	printf("\nprocess terminated\n");
        else                                        //after every left click next stage will be execute   
			fcfs(stage);
         
        stage++;
//	glFlush();
}

