

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x, int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
    q->size++;
    new_node->order_number = x;
    new_node->qty = y;
    new_node->nextPtr = NULL;
    if(q->headPtr == NULL)
        q->headPtr = new_node;
    else
      (q->tailPtr)->nextPtr = new_node;
    q->tailPtr = new_node;
 }
}

int calculate(NodePtr q,int customer_no){
  int cash,price;
  printf("Customer no: %d\n",customer_no);
  switch(q->order_number){
    case 1: printf("Ramen\nYou have to pay %d\n",price=100*q->qty); break;
    case 2: printf("Somtum\nYou have to pay %d\n",price=200*q->qty); break;
    case 3: printf("Steak\nYou have to pay %d\n",price=300*q->qty); break;
    default: printf("No food\n");goto end;
  }
  do{
    printf(":Cash: ");
    scanf("%d", &cash);
  }while(cash < price);
  if(cash == price){
    printf("Thank you\n");
  }
  else{
    printf("Thank you\n");
    printf("Change is %d\n",cash-price);
  }
  end :
  return 0;
}

int dequeue_struct(Queue *q,int customer_no){
   NodePtr t=q->headPtr;
   calculate(t,customer_no);
   if(t){
   q->size--;
   q->headPtr = t->nextPtr;
   if(q->headPtr == NULL)
     q->tailPtr = NULL;
   free(t);
   return 0;
   }
   printf("Empty queue");
   return 0;
}



