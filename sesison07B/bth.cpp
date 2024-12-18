#include<stdio.h>

int main(){
	int n;
	
	// nhap n
	printf("Nhap n = ");
	scanf("%d",&n);
	
	// tao mang
	int arrayInteger[n];
	
	for(int index = 0 ; index < n; index++ ){
		printf("Array [%d] =", index);	
		scanf("%d", arrayInteger + index);
	}
	
	
	// in ra
	for(int index = 0 ; index < n; index++ ){
		printf("%d, ", arrayInteger[index]);
	}
	// tinh tong
	int sum = 0;
	for(int index = 0 ; index < n; index++ ){
		sum += arrayInteger[index];
	}
	
	printf("\nTong : %d",sum);
	
	
	// trung binh 
	printf("\n N =  %d",n);
	printf("\nTrung bình : %.2f",(float)sum/n);
	
	printf("\nDanh sach cac so nguyen to trong mang la : ");
	
	for(int index = 0 ; index < n; index++ ){
		int value = arrayInteger[index];
		int flag = 1; // la nguyen to
		if(value<2){
		 flag = 0;
		}else{
			for(int i = 2; i * i <= value ; i++ ){
				if(value %i ==0){
					flag = 0;
					break;
				}	
			}
		}
		
		if(flag){
			// la so nguyen	
			printf("%d ", value);
		}
	}
	
	// giai thuat kiem tra so nguyen to 
	
	
	
	
	return 0;
	}
