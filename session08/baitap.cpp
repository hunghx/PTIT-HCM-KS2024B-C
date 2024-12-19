
// nhap ma tran vuong


#include<stdio.h>


int main(){
	int n;
	printf("Nhap so hang va cot cua ma tran n : ");
	scanf("%d", &n);
	
	// tao mang 2 chieu
	int matrix[n][n];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0; j< n ; j++){
			printf("Matrix[%d][%d] = ",i,j);
			scanf("%d", &matrix[i][j]);
		}
	}
	// in ra
	for(int i = 0 ; i < n ; i++){
		for(int j = 0; j< n ; j++){
			printf("%d ", matrix[i][j])	;
		}
		printf("\n");
	}
	
	/// tinh tong cac gia tri tren duong bien
	// dieu kien de phan tu do nam tren duong bien
	int sum = 0;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0; j< n ; j++){
			// dieu kien : i ==0 || j==0 || i == n-1 || j == n-1 
			if(i ==0 || j==0 || i == n-1 || j == n-1){
				sum += matrix[i][j];
					printf("%d ", matrix[i][j])	;
			}else{
				printf("  ");
			}
			
		}
		printf("\n");
	}
	
	printf("\ntong cac phan tu nam tren duong bien la : %d\n",sum);
	
	// phan tu nam tren va ben duoi duong cheo chinh
	
	int sum1 = 0;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0; j< n ; j++){
			if(i >= j){
				sum1 += matrix[i][j];
				printf("%d ", matrix[i][j])	;
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\ntong cac phan tu nam teen duong cheo chinh vaf duoi duong cheo chinh la : %d",sum1);
	
	
	return 0;
	}
