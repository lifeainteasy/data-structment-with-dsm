#include <stdio.h>
#include <stdlib.h>
typedef struct Node * NodePointer;
typedef struct Node{
	int data;
	NodePointer link;
} Node;




int Delete(NodePointer tra, NodePointer del){
	
	tra->link = del->link;
	int num = del->data;
	free(del);
	return num;
	
}

int main() {
	
	Node node4 = {4,NULL};
	Node node3 = {3,&node4};
	Node node2 = {2,&node3};
	Node node1 = {1,&node2};

	
	NodePointer Header = &node1;
	int sum = Delete(&node1,&node2);
	printf("[]%d\n",sum);
	for(NodePointer ptr = Header; ptr->link!=NULL ;  ptr = ptr->link)
	{
		printf("%d\n",ptr->data);
	}	

}
