#include<GL/glut.h>
extern time,speed;

void animate(int value) {
    glutTimerFunc(speed, animate, 0);
    time++;
    if (time >= 10)
        time = 0;        // time is in tenths of a second
    glutPostRedisplay();
}