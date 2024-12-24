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
	
		int k = 0;
		int col = 0;
		for(int i = 0; i < m*n-1;i++){
			for(int j = 0; j < m*n-1-i ; j++){
				if(k%4 != 3 ){
					if(array[k][col] > array[k+1][col]){
						int temp = array[k][col];
						array[k][col] = array[k+1][col];
						array[k+1][col] = temp;
					}
				}else{
					if(array[k][m-1] > array[0][col+1]){
						int temp = array[k][m-1];
						array[k][m-1] = array[0][col+1];
						array[0][col+1] = temp;
					}
					k = 0;
					col++;
					continue;
				}
				k++;
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
