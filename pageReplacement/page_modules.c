#include<stdio.h>
#include<GL/glut.h>

		 		 //for
#define   dx 40  //frame
#define   dy 20  //mesh
		

extern float x[2],y[100],x0,yq;
extern float xb[2],yb[100],x1,ya;
extern int n,no,i,j,a[50],frame[10],stage,choice;
int l,xbl[2],ybl[100],xl[2],yl[100],bitxl1[100],bityl1[100],bitxl[100],bityl[100];
int bitx[50],bity[50],bitx1[10],bity1[10];
//GLfloat color[][3] = {{0,1,0},{1,0,0},{0,0,1},{1,1,0},{1,0,1},{0,1,1}};
//create frame mesh

void page(int x0,int yq)
{
	for(i=0;i<2;i++)
		x[i]=x0+i*dx;

	for(j=0;j<=no;j++)
		y[j]=yq+j*dy;

	for(i=0;i<2-1;i++)
		for(j=0;j<=no-1;j++)
		{	
			glColor3f(1.0,0.0,0.0);
			glLineWidth(5.0);
			glBegin(GL_LINE_LOOP);
				glVertex2f(x[i],y[j]);
            			glVertex2f(x[i],y[j+1]);
        			glVertex2f(x[i+1],y[j+1]);
				glVertex2f(x[i+1],y[j]);
 		       	glEnd();
		}
		for(int k=0;k<no;k++)
        {
            bitx1[k] = (x[0]+x[1])/2;
                bity1[k] = (y[k]+y[k+1])/2;
        }

		if(choice == -1)
		for(int i=0;i<no;i++)
		{
			gwindowop(frame[i],bitx1[i],bity1[i]);
		}
}


//create page string mesh
void ipage(int x1,int ya)
{
	for(i=0;i<2;i++)
		xb[i]=x1+i*dx;

	for(j=0;j<=n;j++)
		yb[j]=ya+j*dy;
	l = (yb[n]+yb[n-1])/2;
	for(i=0;i<2-1;i++)
		for(j=0;j<=n-1;j++)
	    {	
			glColor3f(0.0,0.0,0.0);
			glLineWidth(5.0);
		        glBegin(GL_LINE_LOOP);
				glVertex2f(xb[i],yb[j]);
                   		glVertex2f(xb[i],yb[j+1]);
        		        glVertex2f(xb[i+1],yb[j+1]);
				glVertex2f(xb[i+1],yb[j]);
         	       glEnd();

			glColor3f(0.5,0.5,0.5);
			glLineWidth(5.0);
                glBegin(GL_QUADS);
					glVertex2f(xb[i],yb[j]);
                   	glVertex2f(xb[i],yb[j+1]);
        	        glVertex2f(xb[i+1],yb[j+1]);
					glVertex2f(xb[i+1],yb[j]);
                glEnd();			
		
		}		
        for(int hj = 0;hj<n;hj++)
        {		
				bitx[hj] = (xb[0]+xb[1])/2;
                bity[hj] = (yb[hj]+yb[hj+1])/2;
				
                gwindowop(a[n-hj-1], bitx[hj] , bity[hj]);
			
 	    }
 	        		
}

