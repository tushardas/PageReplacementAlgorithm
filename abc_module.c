#include<stdio.h>
#include <stdlib.h>
#include<GL/glut.h>


extern int stage,n,no,frame[10],yb[100];

void abc()
{		
		
     	if(stage > n-1){
			        	printf("\nprocess terminated\n");
				
				//exit(0);
		 }
        else                                        //after every left click next stage will be execute   
		{	fcfs(stage);
         
        	
		}
//	glFlush();
}

