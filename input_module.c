#include<stdio.h>
#include<GL/glut.h>

//input through keyboard from console
extern int i,n,a[50],no,frame[10];
void input()
{
    printf("\n ENTER THE NUMBER OF PAGES:\n");
    scanf("%d",&n);

    printf("\n ENTER THE PAGE NUMBER :\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\n ENTER THE NUMBER OF FRAMES :");
    scanf("%d",&no);

    for(i=0;i<no;i++)
            frame[i]= -1;

}
