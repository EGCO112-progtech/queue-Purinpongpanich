

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
    new_node->data = x;
    new_node->nextPtr = NULL;
    if(q->headPtr == NULL)
        q->headPtr = new_node;
    else
      (q->tailPtr)->nextPtr = new_node;
    q->tailPtr = new_node;
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->data;
   
   return value;
   }
   printf("Empty queue");
   return 0;
}

