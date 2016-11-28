#include <GL/glut.h>
#define dx 40
#define dy 20

extern int choice,xb[],yb[],x[],y[],flag,n,stage,frame[10],no,a[50],count,time,bitx[50],bity[50],bitx1[10],bity1[10],avail,tempframeNum,k;
extern int xbl[],ybl[],xl[],yl[],bitxl1[],bityl1[],bitxl[],bityl[];
void compute()
{
    if(choice == 1)
    {
        int x0 = 135, yq = 135;
        int x1 = 35, ya = 100;

        for(int i=0;i<2;i++)
		    x[i]=x0+i*dx;

	    for(int j=0;j<=no;j++)
		    y[j]=yq+j*dy;

        for(int k=0;k<no;k++)
        {
            bitx1[k] = (x[0]+x[1])/2;
                bity1[k] = (y[k]+y[k+1])/2;
        }

        for(int i=0;i<2;i++)
		xb[i]=x1+i*40;

	for(int j=0;j<=n;j++)
		yb[j]=ya+j*20;

       for(int hj = 0;hj<n;hj++)
        {		
				bitx[hj] = (xb[0]+xb[1])/2;
                bity[hj] = (yb[hj]+yb[hj+1])/2;
			
 	    }
    }

    if(choice == 2)
    {
        int x0l = 375, yql = 135;
        int x1l = 275, yal = 100;

        for(int i=0;i<2;i++)
		    xl[i]=x0l+i*dx;

	    for(int j=0;j<=no;j++)
		    yl[j]=yql+j*dy;

        for(int k=0;k<no;k++)
        {
            bitxl1[k] = (xl[0]+xl[1])/2;
                bityl1[k] = (yl[k]+yl[k+1])/2;
        }

        for(int i=0;i<2;i++)
		xbl[i]=x1l+i*dx;

	for(int j=0;j<=n;j++)
		ybl[j]=yal+j*dy;

       for(int hj = 0;hj<n;hj++)
        {		
				bitxl[hj] = (xbl[0]+xbl[1])/2;
                bityl[hj] = (ybl[hj]+ybl[hj+1])/2;
			
 	    }
    }
}