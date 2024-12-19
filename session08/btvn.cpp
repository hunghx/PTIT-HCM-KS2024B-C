// bai tap 8

// nhap mang 2 chieu , in ra cac phan tu trne d??ng bien


#include<stdio.h>


int main(){
	int m,n;
	printf("Nhap so hang cua ma tran m : ");
	scanf("%d", &m);
	printf("Nhap so cot cua ma tran n : ");
	scanf("%d", &n);
	
	// tao mang 2 chieu
	int matrix[m][n];
	for(int i = 0 ; i < m ; i++){
		for(int j = 0; j< n ; j++){
			printf("Matrix[%d][%d] = ",i,j);
			scanf("%d", &matrix[i][j]);
		}
	}
	// in ra
	for(int i = 0 ; i < m ; i++){
		for(int j = 0; j< n ; j++){
			printf("%d ", matrix[i][j])	;
		}
		printf("\n");
	}
	printf("\n cac ohan tu tren duong bien la : \n");
		// in ra
	for(int i = 0 ; i < m ; i++){
		for(int j = 0; j< n ; j++){
			if(i==0 || j==0 || i==m-1 || j == n-1){
				printf("%d ", matrix[i][j])	;
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	// so nguyen to 
	printf("\n cac phan tu tren duong bien la : ");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0; j< n ; j++){
			int so = matrix[i][j] ;
			int flag = 1;
			if(so <2){
				flag = 0;
			}else{
				for(int i = 2 ; i*i <= so; i++){
					if(so % i ==0){
						flag = 0;
						break;
					}	
				}
			}
			
			if(flag){
				printf("%d ",so);
			}
		}
	}
	
	
	return 0;
	}
