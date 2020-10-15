#include <iostream>

/* r4un this program using the console pauser or add your own getch, system("pause") or input loop */

void Delete(int index,int *arr){
	for(int i = index; i<=4;i++){
	 arr[i] = arr[i+1];
	}
	arr[5] = 0; 	
}

int main(int argc, char** argv) {
	
	int arr[6] = {0,1,2,3,4,5};
	while(1){
		
		printf("몇번째를 삭제할까요? : ");
		int i = 0;
		scanf("%d",&i);
		 
		Delete(i,arr);
		for(int k = 0; k<6; k++){
			printf("[%d]",arr[k]);
		}
	printf("\n");
}

}
