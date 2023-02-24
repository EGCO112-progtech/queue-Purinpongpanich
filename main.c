#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
/* For struct Queue */
  Queue  q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

   int i,x,customer_no = 1;
   
 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            dequeue_struct(&q,customer_no);
            customer_no++;
        }
        else {
        enqueue_struct(&q,atoi(argv[i]),atoi(argv[i+1]));
        i++;
        }
   }
  printf("=================================================");
  if(q.size == 1)
    printf("There is %d ppl left in the queue",q.size);
  else if(q.size > 1)
    printf("There are %d ppl left in the queue",q.size);
  return 0;
}
