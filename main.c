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
            dequeue_struct(&q,customer_no,0);
            customer_no++;
        }
        else {
        enqueue_struct(&q,atoi(argv[i]),atoi(argv[i+1]));
        i++;
        }
   }
  printf("=================================================\n");
  if(q.size == 1)
    printf("There is %d ppl left in the queue\n",q.size);
  else if(q.size > 1)
    printf("There are %d ppl left in the queue\n",q.size);
  if(q.size > 0){
    printf("Clearing all node\n");
    while(q.size>0){
      dequeue_struct(&q,0,1);
    }
  }
  return 0;
}
