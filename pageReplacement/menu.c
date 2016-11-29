#include <GL/glut.h>
#include <stdlib.h>
extern int choice;
void menu_handler(int id)
{
    switch(id)
    {
        case 1: choice = -1;display(); break;
        case 2: exit(0);
    }
}
