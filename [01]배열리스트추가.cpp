#include <stdio.h>

void Insert(int *ptr, int value, int index){
	for(int i = 8;i>=index;i--){
		ptr[i+1] = ptr[i];
	}
	ptr[index] = value;
	
} 

int main(){
	int arr[10]= {0,};
	int value = 0;
	int index = 0;
	while(1){	
		printf("������ ���� �Է����ּ��� : ");
		scanf("%d",&value);
		printf("��� ���� ������ �Է����ּ��� : ");
		scanf("%d",&index);
		Insert(arr,value, index-1);
		for(int i = 0;i<10;i++){
			printf("%d",arr[i]);
		}
	}	
}
