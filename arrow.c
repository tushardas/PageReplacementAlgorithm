#include <GL/glut.h>
void arrow(GLint x,GLint y)
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(x,y);
	glVertex2i(x,y+10);
	glVertex2i(x+10,y+10);
	glVertex2i(x+10,y);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glVertex2i(x+10,y+15);
	glVertex2i(x+10,y-5);
	glVertex2i(x+20,y+4);
	glEnd();
	
}