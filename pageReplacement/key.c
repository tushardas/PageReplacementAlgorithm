#include<GL/glut.h>
extern int choice,stage,stagel,n,flag,count,frameNum,frame[],no,tempframeNum;
void key(unsigned char k,int x,int y)
{
    if(k == 'n' && choice ==1)
    {
            compute();
            if(stage<n)
           {
               fcfs(stage);
               
           }
           stage++;
           
    }

    if(k == 'n' && choice ==2)
    {
            compute();
            if(stagel<n)
           {
               lru(stagel);
               
           }
           stagel++;
    }

    if (k == '1') //mouse event
    {
        flag =1;
        count =0;
           choice = 1;    
           stage = 0;     
           frameNum = 0;
           for(int i=0;i<no;i++) frame[i] = -1;
    }

    if (k == '2') //mouse event
    {
        flag =1;
        count =0;
           choice = 2;    
           stagel = 0;     
           tempframeNum = 0;
           for(int i=0;i<no;i++) frame[i] = -1;
    }


    
}
