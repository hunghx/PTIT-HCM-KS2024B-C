// mang da chieu 


#include<stdio.h>
// mang 2 chieu 
int array2D[3][5] = {
	{1,2,3,4,5},
	{4,5,6,7,8},
	{9,0,1,2,3}	
};
// mang 3 chieu 

int array3D[2][3][2] = {
	{
		{1,2},
		{3,4},
		{5,6}	
	},
	{
		{1,2},
		{3,4},
		{5,6}	
	}
};





int main(){
	// duyet mang :  lap lan luot qua tung gia tri cua mang
	// mang 2 chieu 
	for(int i = 0; i< 3 ; i++){
			for(int j = 0; j< 5 ; j++){
			// hien thi 
				printf("%d ", array2D[i][j]);
			}
			printf("\n");
		}
	
	// duyejt mang 3 chieu
	for(int i = 0; i< 2 ; i++){
		for(int j = 0; j< 3 ; j++){
			for(int k = 0; k<2 ; k++){
			// hien thi 
				printf("%d ", array3D[i][j][k]);
			}
		}
	}
}
