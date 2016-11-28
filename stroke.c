#include<GL/glut.h>

void drawStrokeText(char*string,int x,int y,int z)
{
	  char *c;
	  glPushMatrix();
	  glTranslatef(x, y,z);
	  glScalef(0.09f,0.08f,z);
  
	  for (c=string; *c !='\0'; c++)
	  {
    		glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN , *c);
	  }
	  glPopMatrix();
}