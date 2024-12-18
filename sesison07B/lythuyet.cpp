#include<stdio.h>

// hang so :
const int MAX = 5;

//#define MAX_SIZE = 5

// mang 1 chieu : chi có 1 chi so index 
// khai bao mang so nguyen co 5 phan tu
int arrayInt[MAX] ; // arrayInt ko phai luu tru gia tri, ?? luu dia chi o nho cua phan tu dau tien

int main(){
//	printf("%p \n", arrayInt);
//	printf("%p \n", &arrayInt[0]);
	
	// thao tac lam viec voi mang 1 chieu 
	// truy xuat phan tu tai vi tri index
//	printf("%Phan tu tai vi tri i = 2 là %d\n", arrayInt[2]);
//	
//	// thay doi gia tri cua phan tu tai vi tri i 
//	arrayInt[2] = 100;
//	printf("%Phan tu tai vi tri i = 2 là %d\n", arrayInt[2]);
//		
//	// duyet mang : lap qua lan luot tung phan tu mang
//	for(int index = 0 ; index < 5; index++ ){
//		printf("\n Phan tu tai vi tri i = %d là %d", index, arrayInt[index]);	
//	}
	
	// tính kích thuoc so phan tu toi da mang mang co the luu
//	int maxSize = sizeof(arrayInt) / sizeof(arrayInt[0]);
//	
//	printf("\nsize = %d", maxSize);
	
	// nhap gia tri cho tung phan tu 
	
//		
//	for(int index = 0 ; index < 5; index++ ){
//		printf("Array [%d] =", index);	
//		scanf("%d", arrayInt + index);
//	}
//		for(int index = 0 ; index < 5; index++ ){
//		printf("\n Phan tu tai vi tri i = %d là %d", index, arrayInt[index]);	
//	}
	
	// thuc hanh : cho nguoi dung nhap vao n, tao mang so nguyen n phan tu và thuc hien nhap 
	// gia tri cho lan luot các phan tu va in ra man hinh
	// tính tong tat ca so nguyen vua nhap và in ra man hinh
	
//	int n;
//	
//	// nhap n
//	printf("Nhap n = ");
//	scanf("%d",&n);
//	
//	// tao mang
//	int arrayInteger[n];
//	for(int index = 0 ; index < n; index++ ){
//		printf("Array [%d] =", index);	
//		scanf("%d", arrayInteger + index);
//	}
//	
//	// in ra
//	for(int index = 0 ; index < n; index++ ){
//		printf("%d, ", arrayInteger[index]);
//	}
//	// tinh tong
//	int sum = 0;
//	for(int index = 0 ; index < n; index++ ){
//		sum += arrayInteger[index];
//	}
//	
//	printf("\nTong : %d",sum);
	
	
	// mang nhieu chieu 
	// mang 2 chieu 
	int array2D[4][3] = { {1,2,3}, {4,5,6} ,{1,2,3}, {4,5,6} };
	// lay ra gia tri 6
		printf("%Phan tu có gia tri = 6 là %d\n", array2D[1][2]);
		
		// thao tac duyet mang
		// mang 2 chieu thuong bieu dien duoi dang ma tran
		 // gom cac hang và cac cot
	
		 
		for(int i = 0 ; i < 4 ; i++){
			for(int j= 0 ;j < 3; j++ ){
				printf("%d, ", array2D[i][j]);
			}
			printf("\n");
			
		}
		
	
	return 0;
}




