#include<stdio.h>
#include<GL/glut.h>

#define   maxx 2 //for
#define   dx 35  //frame
#define   dy 10  //mesh
#define   idx 30 //for page string mesh


/*Global variables*/
int k=0,i,j,frameNum = 0,n,a[50],no,avail,count=0,stage=0,q=0,r=0;
int frame[10]; //pages in the frame after every stage
GLfloat x[2] = {0,0} , y[100] = {0} , x0 = 150.0 , yq = 100.0; //frames mesh
GLfloat x1 = 10.0, ya = 100,xb[2] = {0,0} , yb[100] = {0};     //page string mesh


/*function declartions*/
void gwindowop(char p,GLfloat x,GLfloat y);
void input();
void fcfs(int stage);
void page();
void ipage();
void display();
void abc();
void mymouse();
void init();
void gwindowop(char p,GLfloat x,GLfloat y);


/*main function*/
int main(int argc,char **argv)
{
    input();
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(10000,10000);

    glutCreateWindow("FCFS");
    glutMouseFunc(mymouse);
    glutDisplayFunc(display);

    init();
    glutMainLoop();
}


















