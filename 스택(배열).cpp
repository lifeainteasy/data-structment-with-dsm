#include <stdio.h>


int stack[10] = {0,};
int top = -1;

void pop(){
	stack[top--] = 0;
	printf("현재 TOP의 위치(pop 됨) : %d\n",top);
	
}

void push(int value){
	
	if(top == 10){
			printf("스택이 가득 찼습니다.\n");
			return;
	}
	stack[++top] = value;
	printf("현재 TOP의 위치 (push 됨) : %d\n",top);

}

int main(){
	push(1);
	for(int i = 0; i<10; i++) printf("%d",stack[i]);
	printf("\n");
	
		push(2);
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	 push(3);
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	 push(4);
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	 push(5);
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	 push(6);
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	 push(7);
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	 push(8);
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	 push(9);
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	 push(10);
	for(int i = 0; i<10; i++) printf("%d",stack[i] );
	printf("\n");
	
	pop();
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	pop();
	for(int i = 0; i<10; i++) printf("%d",stack[i] );
	printf("\n");
	
	pop();
	for(int i = 0; i<10; i++) printf("%d",stack[i] );
	printf("\n");
	
	pop();
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	pop();
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	pop();
	for(int i = 0; i<10; i++) printf("%d",stack[i]  );
	printf("\n");
	
	
	 
}
