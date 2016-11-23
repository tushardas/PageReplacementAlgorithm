#include<GL/glut.h>

void myReshape(int w, int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if(w<=h)
   gluOrtho2D(0.0,500.0,0.0*(GLfloat)h/(GLfloat)w,500.0*(GLfloat)h/(GLfloat)w);
	else
	   gluOrtho2D(0.0*(GLfloat)w/(GLfloat)h,500.0*(GLfloat)w/(GLfloat)h,0.0,500.0);
	   glMatrixMode(GL_MODELVIEW);
}
