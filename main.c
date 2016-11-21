#include<stdio.h>
#include<GL/glut.h>

#define   maxx 2 //for
#define   dx 35  //frame
#define   dy 10  //mesh
#define   idx 30 //for page string mesh


/*Global variables*/
int k=0,i,j,frameNum = 0,flag=0,n,a[50],no,avail,count=0,stage=0,q=0,r=0,time;
GLfloat speed = 0.1f;
int frame[10]; //pages in the frame after every stage
GLfloat x[2] = {0,0} , y[100] = {0} , x0 = 400.0 , yq = 150.0; //frames mesh
GLfloat x1 = 250.0, ya = 120,xb[2] = {0,0} , yb[100] = {0};     //page string mesh


/*function declartions*/
void gwindowop(int ,int ,int);
void input();
void animate(int);
void fcfs(int stage);
void page();
void ipage();
void display();
void abc();
void mymouse();
void init();
void blink();
void gwindowopf(int,int,int,int,int);


/*main function*/
int main(int argc,char **argv)
{
    input();
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1500,1500);

    glutCreateWindow("FCFS");
    
    glutMouseFunc(mymouse);
    
  
    glutDisplayFunc(display);
  
    //glutPostRedisplay();
    init();
    glutMainLoop();
}


















