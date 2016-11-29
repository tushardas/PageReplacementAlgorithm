#include <GL/glut.h>

void arrow(GLint x,GLint y)
{
	glColor3f(0.5,1.0,0.5);
	//glRotatef(90.0,0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(x,y);
	glVertex2i(x,y+5);
	glVertex2i(x+5,y+5);
	glVertex2i(x+5,y);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glVertex2i(x+5,y+7.5);
	glVertex2i(x+10,y+2.5);
	glVertex2i(x+5,y-2.5);
	glEnd();
	
}