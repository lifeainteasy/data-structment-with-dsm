#include <stdio.h> 

typedef struct Node * NodePointer;
typedef struct Node{
	int data;
	NodePointer link;
} Node;

int Search(int key,NodePointer np){
		int i ;
		if(np->link == NULL) return -1;
		for(i = 1;np->data != key; np = np->link) i++;
		return i;

}


int main(){

	Node node4 ={4,NULL};	
	Node node3 = {3,&node4};
	Node node2 = {2,&node3};
	Node node1 = {1,&node2};
	NodePointer header = &node1;
	


	printf("연결리스트에서 값을 찾을 수 를 입력해주세요 : ");
	int i= 0;
	scanf("%d",&i);
	int num = Search(i,header);
	if(num == -1) printf("ERROR");
	else printf("Big(%d)\n",num);

	

}
