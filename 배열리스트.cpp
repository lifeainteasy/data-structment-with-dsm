#include <stdio.h>
#include <stdlib.h>
typedef struct Node * NodePointer;
typedef struct Node{
	int data;
	NodePointer link;
}Node;
void insert(NodePointer pre,int value){
	NodePointer temp = (NodePointer)malloc(sizeof(Node));
	temp->data = value;
	temp->link = pre->link;
	pre->link = temp;
	
}
int main(){

		Node node7={7,NULL};
		Node node6={6,&node7};
		Node node5={5,&node6};
		Node node4={4,&node5};
		Node node3={3,&node4};
		Node node2={2,&node3};

	Node node1={1,&node2};

	NodePointer header = &node1;
	
	while(1){
		 header = &node1;

		for(int i = 0; header->link ; header= header->link ){
			printf("\n------\n|     |\n|     |\n|  %d  |\n|     |\n|     |\n--------",header->data);
		}
		printf("\n----------------------\n");
		printf("몇번째에 삽입하실 것인가요?");
		
		header = &node1;
		
		int num;
		scanf("%d",&num); 
		
		for(int i = 0; i<num-1; i++){
		header = header -> link ;
			if(!header->link){
				printf("오류");
				return 0;
			}
		}
		printf("어떤값을 삽입하실 건가요?");
				scanf("%d",&num); 

		insert(header,num);
	}

} 

