#include <GL/glut.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/stat.h>
#include <spawn.h>
#define P_OVERLAY 1
#include <sys/types.h>
//#include "process.h"
int id, choice_d = 0,n,no,var,a[100],z=0,v=-1,temp,q[50],setWindow = 0;
int main_menu_id;
char input[10];
void myinit()
{
    glClearColor(0.2,0.1,0.4,1.0);
    //glColor3f(1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
    glMatrixMode(GL_MODELVIEW);
}

void gprint(int x, int y,int z, char *string)
{
    //set the position of the text in the window using the x and y coordinates
    glRasterPos2f(x,y);
    
    //get the length of the string to display
    int len = (int) strlen(string);

    //loop to display character by character
    for (int i = 0; i < len; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
        
    }
}




void initial_display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    if(choice_d == 0)
    {
       
        glLineWidth(10.0);
         glColor3f(0.0,0.0,0.0);
        glBegin(GL_LINE_LOOP);
            glVertex2i(31,462);
            glVertex2i(31,112);
            glVertex2i(469,112);
            glVertex2i(469,462);
        glEnd();

        glColor3f(0.0,1.0,1.0);
        char string[]= {"Welcome to Computer Graphics"};
         glRasterPos2f(125,431);
    int len = (int) strlen(string);
    for (int i = 0; i < len; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
    }

        glColor3f(1.0,0.0,0.0);
        gprint(156,350,0,"  Computer Graphics Project ");

        glColor3f(0.0,0.2,1.0);
        gprint(187.5,319,0,"   Using OpenGL");
        
        glColor3f(1.0,1.0,0.0);
        char string1[100] = {"Page Replacement Algorithm"};
         glRasterPos2f(156,237);
        len = (int) strlen(string1);

        for (int i = 0; i < len; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string1[i]);
    }

        //gprint(280,300,0,"Page Replacement Algorithm");

     
        glColor3f(1.0,0.0,1.0);
        gprint(175,169,0,"Tushar Das   14GAEC9062");
        
        glColor3f(0.0,1.0,1.0);
        gprint(175,125,0,"Vignesh B    14GAEC9065");
        
        

    }

    if(choice_d == 1)
    {
        glColor3f(1.0,0.0,0.0);
        gprint(150,431,0,"First In First Out");

        glColor3f(1.0,1.0,0.0);
        gprint(19,375,0,"The simplest page-replacement algorithm is a FIFO algorithm.");   
        gprint(19,331,0,"The idea is obvious from the name – the operating system keeps track of all ");   
        gprint(19,312,0,"the pages in memory in a queue, with the most recent arrival at the back,");   
        gprint(19,294,0,"and the oldest arrival in front.");   
        gprint(19,250,0,"When a page needs to be replaced, the page at the front of the queue ");   
        gprint(19,231,0,"(the oldest page) is selected.");   
        gprint(19,188,0,"While FIFO is cheap & intuitive, it performs poorly in practical application.");   
        gprint(19,169,0," Thus, it is rarely used in its unmodified form.");
        gprint(19,150,0,"");
        gprint(19,106,0,"In simple words,on a page fault, the frame that has been in memory the");
        gprint(19,88,0,"longest is replaced.");
        
    }

    if(choice_d == 2)
    {
        glColor3f(1.0,0.0,0.0);
        gprint(150,431,0,"Least Recently Used");
        
        glColor3f(1.0,1.0,0.0);
        gprint(19,375,0,"The least recently used (LRU) page replacement algorithm, though similar");   
        gprint(19,331,0,"in name to NRU, differs in the fact that LRU keeps track of page usage  ");   
        gprint(19,312,0,"over a short period of time, while NRU just looks at the usage in the");   
        gprint(19,294,0,"last clock interval. ");   
        gprint(19,250,0,"LRU works on the idea that pages that have been most heavily used in the");   
        gprint(19,231,0,"past few instructions are most likely to be used heavily in the next few");
        gprint(19,212,0,"instructions too.");   
        gprint(19,169,0,"While LRU can provide near-optimal performance in theory (almost as");   
        gprint(19,150,0,"good as Adaptive Replacement Cache),it is rather expensive to implement");
        gprint(19,131,0,"in practice");
        gprint(19,86,0,"There are a few implementation methods for this algorithm that try to");
        gprint(19,69,0,"reduce the cost yet keep as much of the performance as possible.");
        
    }

    if(choice_d == 3)
    {
        glColor3f(1.0,0.0,0.0);
        gprint(212,425,0,"INPUT");
        glColor3f(1.0,1.0,0.0);
        if(v == -1)
        {   gprint(19,375,0,"Enter no of pages               : ");
             char f[10];
             sprintf(f,"%d",n);
             gprint(206,375,0,f);
        }
        if(v >= 0 && v < n)
        { 
             gprint(19,375,0,"Enter no of pages               : ");
             char f[10];
             sprintf(f,"%d",n);
             gprint(206,375,0,f);
             gprint(19,337,0,"Enter the reference string  :  ");
             for(int i=0;i<v;i++)
             {
                 sprintf(f,"%d",a[i]);
                 gprint(206+i*19,337,0,f);
             
             }      

        }   
        if(v == n)
        {
             gprint(19,375,0,"Enter no of pages               : ");
             char f[10];
             sprintf(f,"%d",n);
             gprint(206,375,0,f);
             gprint(19,337,0,"Enter the reference string  :  ");
             for(int i=0;i<n;i++)
             {
                 sprintf(f,"%d",a[i]);
                 gprint(206 + i*13,337,0,f);
             }
             gprint(19,300,0,"Enter no of frames              : ");
             sprintf(f,"%d",no);
             gprint(206,300,0,f);
             
        }

        if(v > n)
        {
            gprint(19,375,0,"Enter no of pages               : ");
             char f[10];
             sprintf(f,"%d",n);
             gprint(206,375,0,f);
             gprint(19,337,0,"Enter the reference string  :  ");
             for(int i=0;i<n;i++)
             {
                 sprintf(f,"%d",a[i]);
                 gprint(206 + i*13,337,0,f);
                 
             }
             gprint(19,300,0,"Enter no of frames              : ");
             sprintf(f,"%d",no);
             gprint(206,300,0,f);

             gprint(19,100,0,"Press 'S' or 's' to start ");
             

        }

    }
    
    if(choice_d == 4)
    {
        exit(0);
    }


    if(choice_d == 5)
    {
        glColor3f(1.0,0.0,0.0);
        gprint(125,431,0,"Page Replacement Algorithm");

        glColor3f(1.0,1.0,0.0);
        gprint(19,375,0,"In a computer operating system that uses paging for virtual memory");   
        gprint(19,350,0,"management, page replacement algorithms decide which memory pages");   
        gprint(19,325,0,"to page out (swap out, write to disk) when a page of memory needs");   
        gprint(19,300,0,"to be allocated. Paging happens when a page fault occurs and a");   
        gprint(19,275,0,"free page cannot be used to satisfy the allocation, either ");   
        gprint(19,250,0,"because there are none, or because the number of free pages");   
        gprint(19,225,0,"is lower than some threshold.");   
        gprint(19,187,0,"Different Algorithms:");
        gprint(19,163,0,"1. First In First Out");
        gprint(19,137,0,"2. Least Recently Used");
        gprint(19,112,0,"3. Optimal Page Replacement");
        
        
    }
    glFlush();
}

void input_menu(int id)
{
    if(choice_d == 3)
    {if(v == -1) {n = id; v++;}
    else if(v > -1 && v < n) {a[v] = id; v++;}
    else if(v == n)  {no = id; v++;}}
}


void mymenu(int i)
{
 
    switch(i)
    {
        case 5: choice_d = 0; break;
        case 1: choice_d = 1; break;
        case 2: choice_d = 2; break;
        case 3: choice_d = 3; break;
        case 0: choice_d = 5; break;
        case 4: exit(0);
        case 6:  
        break;
        case 11: input_menu(1);break;
        case 12: input_menu(2);break;
        case 13: input_menu(3);break;
        case 14: input_menu(4);break;
        case 15: input_menu(5);break;
        case 16: input_menu(6);break;
        case 17: input_menu(7);break;
        case 18: input_menu(8);break;
        case 19: input_menu(9);break;
        

    }
    glutPostRedisplay();
}

/*
void starter(int btn,int state,int x,int y)
{
    if(btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >=300 && x<=450 && y>=10 && y<=70 )
        setWindow = 1;
}
*/

void keys(unsigned char k,int x,int y)
{
       FILE *f = fopen("inputfile.txt","w");
       fprintf(f,"%d",n);
        fprintf(f," ");
        for(int i = 0;i<n;i++){ fprintf(f,"%d",a[i]); fprintf(f," ");}
        fprintf(f,"%d",no); fprintf(f," ");
        fclose(f);
        
    if(k =='s' || k == 'S')
    {
        system("./pageReplace < inputfile.txt");
        //fclose(f);
    }
}

int main(int argc, char** argv)
{
    if(!setWindow)      
     {        
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
      
    glutInitWindowPosition(100,100);
    glutInitWindowSize(640,480);

   
    id = glutCreateWindow("Page Replacement Algorithm");
    glutDisplayFunc(initial_display);
    //glutKeyboardFunc(keys);
      int input_id = glutCreateMenu(mymenu);
                glutAddMenuEntry("Go to Input",3);
                glutAddMenuEntry("1",11);
                glutAddMenuEntry("2",12);
                glutAddMenuEntry("3",13);
                glutAddMenuEntry("4",14);
                glutAddMenuEntry("5",15);
                glutAddMenuEntry("6",16);
                glutAddMenuEntry("7",17);
                glutAddMenuEntry("8",18);
                glutAddMenuEntry("9",19);
     int main_menu_id = glutCreateMenu(mymenu);
    glutAddMenuEntry("Page Replacement Algorithm",0); 
    glutAddMenuEntry("FIFO",1);
    glutAddMenuEntry("LRU",2);
    glutAddSubMenu("INPUT",input_id);
    glutAddMenuEntry("BACK",5);
    //glutAddMenuEntry("START",6);
    glutAddMenuEntry("QUIT",4);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutKeyboardFunc(keys);
    //glutMouseFunc(starter);
    myinit();
    glutMainLoop();
     }

}
