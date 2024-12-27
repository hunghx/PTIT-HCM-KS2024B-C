#include<stdio.h>
#define MAX 100

int arr[MAX];
int n = 0;

void inputArray();
int sumArray();
float averageArray();
void printResults(int sum,float avg);

int main(){
	// goi ham
	inputArray();
	int sum = sumArray();
	float avg = averageArray();
	// in ra
	printResults(sum, avg);
	return 0;
	}

void inputArray(){
	// nhap n 
	printf("Nhap so luong phan tu mang : ");
	scanf("%d",&n);
	if(n>MAX){
		printf("Kich thuoc vuot qua kich thuoc lon nhat cua mang la 100 \n");
		return;	
	}
	// nhap gia tri mang
	for(int i =0; i<n;i++){
		printf("Array[%d] = ",i);
		scanf("%d", arr+i);	
	}
};
int sumArray(){
	int sum =0;
	for(int i =0; i<n;i++){
		sum+= arr[i];	
	}
	return sum;
};
float averageArray(){
	return (float)sumArray()/n;
};
void printResults(int sum,float avg){
	printf("Tong cac so trong mang la %d \n", sum);
	printf("trung binh cong cac so trong mang la %.2f \n", avg);
};
