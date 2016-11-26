#include<GL/glut.h>
extern int choice,stage,stagel,n;
void key(unsigned char k,int x,int y)
{
    if(k == 'n' && choice ==1)
    {
            compute();
            if(stage<n)
           fcfs(stage);
           stage++;
    }

    if(k == 'n' && choice ==2)
    {
            compute();
            if(stagel<n)
           lru(stagel);
           stagel++;
    }

    
}