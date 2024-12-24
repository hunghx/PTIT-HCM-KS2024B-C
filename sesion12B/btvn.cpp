#include<stdio.h>


int main(){
	// sap xep noi bot mang arr có n phan tu
	
//	for(int i = 0; i < n-1;i++){
//		for(int j = 0; j < n-1-i ; j++){
//			if(arr[j] > arr[j+1]){
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	
	int m = 3, n = 3;
	int array[m][n];
	
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d", &array[i][j]);
		}
			
	}
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
			
	}
	


	// cot có chi so = 0; có m phan tu
	
	
	
		for(int i = 0; i < m*n-1 ;i++){
			int col = 0;
			int row = 0;
			for(int j = 0; j < m*n-1-i ; j++){
				if(row%m != m-1 ){
//					printf("\n%d",j);
					if(array[row][col] > array[row+1][col]){
						int temp = array[row][col];
						array[row][col] = array[row+1][col];
						array[row+1][col] = temp;
					}
					row++;
				}else{
					if(array[row][col] > array[0][col+1]){
						int temp = array[row][col];
						array[row][col] = array[0][col+1];
						array[0][col+1] = temp;
					}
					row = 0;
					col++;
				}	
			}
			
		}

// duong cheo chinh : i == j

//		for(int i = 0; i < m-1;i++){
//			for(int j = 0; j < m-1-i ; j++){
//				if(array[j][j] > array[j+1][j+1]){
//					int temp = array[j][j];
//					array[j][j] = array[j+1][j+1];
//					array[j+1][j+1] = temp;
//				}
//			}
//		}

	
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
			
	}
	

	
	
	
	return 0;	
}
