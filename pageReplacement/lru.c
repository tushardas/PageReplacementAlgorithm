#include<stdio.h>
 
extern int a[50],avail,no,frame[10],tempframeNum,count,n,bitx[50],bity[50],bitx1[10],bity1[10];
extern int bitxl[],bityl[],bitxl1[],bityl1[],stagel;
	int m,position, k, l,o=0;
	
int temp[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1};

void lru(int stagel)
{
	int x =0, y=0;
	avail=0,tempframeNum = 0;
	for(m = 0; m < no; m++)
		{
			if(frame[m] == a[stagel])
			{
				x = 1;
				for(int i=0;i<no;i++)
				{
					if(temp[i] >temp[m])	temp[i] -= 1;
				}
				temp[m]=no-1;
				avail=1;
				glutPostRedisplay();
				break;
			}
		}
		if(x == 0)
		{
			for(m = 0; m < no; m++)
			{
				if(frame[m] == -1)
				{
					frame[m] = a[stagel];
					for(int i=0;i<no;i++)
					{
						if(temp[i] >0)	temp[i] -= 1;
					}
					temp[m] = no-1;
					tempframeNum = m;
					count++;
					y =1;
					break;
				}
			}

			if(y == 0)
			{
				for(int i=0;i<no;i++)
					{
						if(temp[i] != 0)	temp[i] -= 1;
						else  position = i;
					}

					temp[position] = no-1;
							frame[position] = a[stagel];
							tempframeNum = position;
							count++;
							
			}

		}
		
		printf("\n");
		for(m = 0; m < no; m++)
		{
			printf("%d\t", frame[m]);
		}
	
	printf("\nTotal Number of Page Faults:\t%d\n", count);
	
	gwindowopf(a[stagel],bitxl[n-stagel-1],bityl[n-stagel-1],bitxl1[no-tempframeNum-1],bityl1[no-tempframeNum-1]);


}
