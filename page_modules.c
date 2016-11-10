#include<stdio.h>
#include<GL/glut.h>
		 //for
#define   dx 35  //frame
#define   dy 10  //mesh
#define   idx 30 //for page string mesh

extern float x[2],y[100],x0,yq;
extern float xb[2],yb[100],x1,ya;
extern int n,no,i,j,a[50];

//create frame mesh
void page()
{
	for(i=0;i<2;i++)
		x[i]=x0+i*dx;

	for(j=0;j<=no;j++)
		y[j]=yq+j*dy;

	for(i=0;i<2-1;i++)
		for(j=0;j<=no-1;j++)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(x[i],y[j]);
            		glVertex2f(x[i],y[j+1]);
        		glVertex2f(x[i+1],y[j+1]);
			glVertex2f(x[i+1],y[j]);
        		glEnd();
		}
}


//create page string mesh
void ipage()
{
	for(i=0;i<2;i++)
		xb[i]=x1+i*idx;

	for(j=0;j<=n;j++)
		yb[j]=ya+j*dy;

	for(i=0;i<2-1;i++)
		for(j=0;j<=n-1;j++)
	        {
		        glColor3f(1.0,1.0,1.0);
                	glBegin(GL_LINE_LOOP);
			glVertex2f(xb[i],yb[j]);
                    	glVertex2f(xb[i],yb[j+1]);
        	        glVertex2f(xb[i+1],yb[j+1]);
			glVertex2f(xb[i+1],yb[j]);
                	glEnd();

                	for(int hj = 0;hj<n;hj++)
                	{
                       		int g = (xb[0]+xb[1])/2;
                  			int h = (yb[hj]+yb[hj+1])/2;
                    		gwindowop(a[n-hj-1], g ,h);
 	           	}
 	        }		
}

