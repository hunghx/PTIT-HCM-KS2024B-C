#include<stdio.h>
#include<stdlib.h>

int main(){
	// tim kiem gia tri 50 trong mang ngau nhien
	int array[100];
	for(int i=0 ;i< 100; i++){
		array[i] = rand() % 200;	
	}
	

//	// tim kiem tuyen tinh
//	int flag = 1;
//	for(int i = 0; i < 100; i++){
//		if(array[i] == 50){
//			flag =0;
//			printf("\n%d duoc tim thay tai vi tri %d ", 50, i);
//			break;
//		}	
//	}
//	if(flag){
//		printf("ko tim thay gia tri 50 trong mang");	
//	}
	
	// tim kiem nhi phan
	// 
	
	for(int i = 0; i< 99; i++){
		for(int j = 0; j< 99-i; j++){
			if(array[j] > array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}	
		}	
	}
	for(int i=0 ;i< 100; i++){
		printf("%d ", array[i])	;
	}
	int start, end, mid;
	start = 0;
	end = 99;
	while(start <= end)
	{
		mid = start + (end-start)/2;
		
		if(array[mid]== 50){
			// tim thay
			printf("\n%d duoc tim thay tai vi tri %d ", 50, mid);
			break;
		}else if(array[mid]< 50){
			// ben phai vi tri mid	
			start = mid +1;
		}else{
			// ben trai mid
			end = mid -1;
		}
	}
	if(start > end){
			printf("\nko tim thay gia tri 50 trong mang");
	}
	
	
	return 0;	
}
