#include <stdio.h>
#include <stdlib.h>
typedef struct Node * NodePointer;

typedef struct  Node{
	int data;
	NodePointer	link;
}Node;



NodePointer top = NULL;


int pop(){
	if(!top) return printf("Stack is empty!\n");
	top = top->link ;
} 
	

void push(int value){
	NodePointer newNode = (NodePointer)malloc(sizeof(Node));
	newNode->data = value;
	newNode->link  = top;
	top=newNode;	
}
int main(){
	push(7);
	push(6);
	push(5);
	push(4);
	push(3);
	push(2);
	push(1);
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	push(1);
	push(2);
	for(NodePointer Ptr = top;Ptr;Ptr=Ptr->link ){
		printf("%d\n",Ptr->data);
	}
	
}
