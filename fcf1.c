#include<stdio.h>
#include<GL/glut.h>

#define   maxx 2
#define   dx 50
#define   dy 10


int i,j,n,a[50],no,k,avail,count=0;
char frame[10];
GLfloat x[2] = {0,0} , y[100] = {0} , x0 = 50.0 , yq = 50.0;


void gwindowop(char p,GLfloat x,GLfloat y)
{
    glColor3f(1.0,0.0,0.0);
    glRasterPos2f(x,y);
    glutBitmapCharacter( GLUT_BITMAP_9_BY_15 , p+48 );
}



void fcfs()
{
    printf("\n ENTER THE NUMBER OF PAGES:\n");
    scanf("%d",&n);

    printf("\n ENTER THE PAGE NUMBER :\n");

    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);

    printf("\n ENTER THE NUMBER OF FRAMES :");
    scanf("%d",&no);

    for(i=0;i<no;i++)
            frame[i]= -1;
    j=0;

    printf("\tref string\t page frames\n");

    for(i=1;i<=n;i++)
    {
            printf("%d\t\t",a[i]);

            avail=0;

            for(k=0;k<no;k++)

                if(frame[k]==a[i])
                {
                    avail=1;
                    for(k=0;k<no;k++)
                        printf("%d\t",frame[k]);
                }
                if (avail==0)
                {
                    frame[j]=a[i];
                    j=(j+1)%no;
                    count++;
                    for(k=0;k<no;k++)
                        printf("%d\t",frame[k]);
                }

                printf("\n");
    }

    printf("Page Fault Is %d\n\n",count);
}



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
  	//glFlush();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    page();
    int l,m;

    for(int i=0;i<n;i++)
        fcsf(i);
    for(int k=0;k<no;k++)
    {
        l = (x[0]+x[1])/2;
        m = (y[k]+y[k+1])/2;
        gwindowop(frame[no-k-1], l ,m);
    }
    glFlush();

}

void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
    glColor3f(1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,250,0,250);
    glMatrixMode(GL_MODELVIEW);
}


int main(int argc,char **argv)
{
    fcfs();
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("FCFS");
    glutDisplayFunc(display);
    init();
    glutMainLoop();
}
