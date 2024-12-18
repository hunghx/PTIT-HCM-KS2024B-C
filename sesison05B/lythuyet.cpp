#include<stdio.h>


int main(){
	// FOR : lap dua tren bien lap 
//	for(int i = 0, j = 10 ; i < 10  ; i++, j-- ){ //block 
//		// khoi lenh lap : body
//		if(i==5){
////			return 1;
//		}
//		printf("i = %d và  j = %d\n",i,j);
//	}
	
	
	// WHILE : dua tren dieu kien 
	int choice = -1;
//	while(choice != 0){
//		// khoi lenh lap : body
//		printf("\nnhap choice");
//		scanf("%d",&choice);
//	}
//	
	// DO WHILE 
	
//	do{
//		// phan than
//		printf("\nnhap choice");
//		scanf("%d",&choice);
//	}while(choice != 0);
	
	//
	
	
	// cau lenh nhay : break , continue, return 
	// vong lap vo han : 
	
//	while(true){
//		// hien thi menu chuc nang
//		printf("==============menu============\n");
//		printf("1. tinh nag 1\n");
//		printf("2. tinh nag 2\n");
//		printf("3. tinh nag 3\n");
//		printf("4. tinh nag 4\n");	
//		printf("0. Thoat");
//		
//		int choice ;
//		
//		printf ("\n Nhap choice");
//		scanf("%d",&choice);
//		
//		
//		if(choice ==0){
//			break;
//		}		
//	}
	
	
	// bài toán ung dung 
	// nhâp n;
	// hien thi n so chia het cho 3 dau tien >0 ; while/ do while
	
	int n, number = 3, count = 0;
	
	
	printf("\nnhap n");
	scanf("%d",&n);
	
	while(count<n){
		if(number%3==0){
			// chia het cho 3 in ra nó
			printf("%d ",number);
			count++;
		}	
		number++;
	}
	
	
	
	
	
	
	return 0;
	
	}
