#include<stdio.h>
#include <stdlib.h>

#include <time.h>
int main(){
	// tao mang ngau nhien
	int size =10000;
	int arrayRandom[10000];
	for(int i =0;i<10000;i++){
		arrayRandom[i] = rand()%10000;
//		arrayRandom[i] = i+1;	
	}
	printf("\nTruoc khi sap xep : \n");
	for(int i =0 ; i< 10000 ;i++){
		
		printf("%d ", arrayRandom[i]);
	}
	
	// sap xep chen
//	for(int i = 1 ; i < 10; i++){
//		int key = arrayRandom[i];
//		int j = i-1;
////		for(; j>=0 && key < arrayRandom[j] ; j--){
////			arrayRandom[j+1] = arrayRandom[j];
////		}
//		while(j>=0 && key < arrayRandom[j]){
//			arrayRandom[j+1] = arrayRandom[j];
//			j--;
//		}
//		// can thay doi gia tri vào vi tri can chen
//		arrayRandom[j+1] = key;
//	}
//	
	// sap xep noi bot
	// 1,2,3,4,5,6,8,7
//	int dem=0;
//	int check = 1;
//	for(int i = 0 ; i< size -1 && check; i++ ){
//		check = 0; // ko can tiep tuc vong lap
//		for(int j = 0; j < size-i-1 ; j++,dem++){
//			printf("lap %d lan \n",dem+1);
//			if(arrayRandom[j] > arrayRandom[j+1]){
//				check = 1;
//				int temp = arrayRandom[j];
//				arrayRandom[j]= arrayRandom[j+1];
//				arrayRandom[j+1] = temp;
//			}
//		}	
//	}
	
	// sap xep chon : selection sort
	
	
	time_t curtime1;
    time(&curtime1);
    printf("\nTh?i gian hi?n t?i: %ld", curtime1);
	for(int i = 0 ; i<size ; i++){
		int minValue = arrayRandom[i];
		int minIndex = i;
		for(int j = i+1; j< size; j++){
			if(minValue > arrayRandom[j]){
				minValue = arrayRandom[j];
				minIndex = j;
			}
		}
		if(minIndex != i){
			arrayRandom[minIndex] = arrayRandom[i];
			arrayRandom[i] = minValue; 
		}	
	}
	time_t curtime2;
    time(&curtime2);
    printf("\nTh?i gian hi?n t?i: %ld", curtime2);
    printf("\n thoi gian = %ld", curtime2-curtime1);
	
	printf("\nTruoc sau sap xep : \n");
	for(int i =0 ; i< 1000 ;i++){
		
		printf("%d ", arrayRandom[i]);
		}
	return 0;
	}
