#include<stdio.h>


int main(){
	int m = 3, n=3;
	int matrix[m][n]; // m hang , n cot
	
	for(int i = 0 ; i<m;i++){
		for(int j = 0; j<n;j++){
			printf("Matrix[%d][%d] = ",i,j);
			scanf("%d",&matrix[i][j]);	
		}
	}
	for(int i = 0 ; i<m;i++){
		for(int j = 0; j<n;j++){
			printf("%d ",matrix[i][j]);	
		}
		printf("\n");
	}
	

	// sap xep
	
//	for(int k = 0 ; k < n;k++){
//		// môi cot co m phan tu
//		// giai thuat noi bot
//		
//		for(int i = 0; i< m-1;i++){	
//			for(int j = 0;j<m-i-1 ; j++){
//				if(matrix[j][k] > matrix[j+1][k]){
//					int temp = matrix[j][k];
//					matrix[j][k]= matrix[j+1][k];
//					matrix[j+1][k] = temp;
//				}
//			}
//		}
//			
//		
//	}

// duong cheo chinh : matrix[i][i]
//	for(int i = 0; i< n-1;i++){	
//		for(int j = 0;j<n-i-1 ; j++){
//			if(matrix[j][j] > matrix[j+1][j+1]){
//				int temp = matrix[j][j];
//				matrix[j][j]= matrix[j+1][j+1];
//				matrix[j+1][j+1] = temp;
//			}
//		}
//	}

	// duong cheo phu
	for(int i = 0; i< n-1;i++){	
		for(int j = 0;j<n-i-1 ; j++){
			if(matrix[j][n-j-1] < matrix[j+1][n-j-2]){
				int temp = matrix[j][n-j-1];
				matrix[j][n-j-1]= matrix[j+1][n-j-2];
				matrix[j+1][n-j-2] = temp;
			}
		}
	}
	
	
	printf("\nMang sau sinh da sap xep \n");
	
	for(int i = 0 ; i<m;i++){
		for(int j = 0; j<n;j++){
			printf("%d ",matrix[i][j]);	
		}
		printf("\n");
	}
	
	// noi bot 
	
	
	
	return 0;
}
