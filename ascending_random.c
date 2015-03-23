#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX_WIDTH     256
#define MAX_ELEMENT     4

int main(void)
{
     int randomVal, maxRepeat=MAX_ELEMENT, idx, prevVal=-1, go=1, execCnt=0;
     int testCnt;
     int randArray[MAX_ELEMENT]={0};
    
     srand(time(NULL));
    
     for (testCnt=0; testCnt<100; testCnt++) {
          while (go==1) {
               printf("execCnt:%d\n",++execCnt);    
               prevVal=-1;
               for (idx=0; idx<maxRepeat; idx++) {              
                    while (1) {
                         randomVal = rand()%MAX_WIDTH;    
                         printf("(%d)",randomVal);                   
                         if ((MAX_WIDTH-randomVal)<(MAX_ELEMENT-idx)) {                        
                              printf("%d < %d ? , skip...\n",MAX_WIDTH-randomVal,MAX_ELEMENT-idx);
                              goto skip;
                         }
                         if (randomVal>prevVal) {
                              prevVal=randArray[idx]=randomVal;
                              printf("randArray[%d]=%d\n",idx,randArray[idx]);
                              break;
                         }              
                    }
               }    
skip:
               printf("idx=%d\n",idx);
               if (idx>=MAX_ELEMENT)
                    go=0;
          }
     }
    
     return 0;
}
