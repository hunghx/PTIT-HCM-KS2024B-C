#include<stdio.h>

// thanh phan cua ham : kieu du lieu tra ve, ten ham (tuan thu qui tac dat ten), tham so : parameters, phân than ham
// khai bao ham 
//  ham tinh tong 2 so nguyen
int sum(int a, int b);
int minus(int a, int b);
// ham ktra so nguyen to
int isPrime(int number);
// ktra so hoan hao
int isPerfectNumber(int number);
int swap(int c, int d);
int swapArray(int arr[]);

int main(){
	// goi ham 
	int ketqua = minus(5,6); // gia tri truyen vao là cac doi so : arguments
	
	printf("kq : %d\n", ketqua);
	
	// khai báo 2 ham : ktra so nguyen to | kiem tra so hoan hao | tra ve 0 neu sai, 1 neu dung
	
	printf("%d \n", isPrime(91));
	printf("%d \n", isPerfectNumber(28));
	
	// passbyvalue 
	// truyen tham tri : truyen gia tri : int float, double, char
	int a =10,b=100;
	swap(a,b);
	printf("a =%d va b =%d \n", a,b); // a =10 va  b=100 | a =100 va b=10;
	// truyen tham chieu : truyen dia chi cua bien
	int arr[] = {10,100};
	swapArray(arr);
	printf("a0 =%d va a1 =%d \n", arr[0],arr[1]);
	return 'a';
	// ko thuc hien
	printf("lenh duoi return");	
}


// logic trien khai

int swap(int c, int d){
	int temp =c;
	c =d;
	d=temp;
};

int swapArray(int arr[]){
	int temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
};
int isPrime(int number){
	if(number<2){
		return 0;
	}
	for(int i =2; i*i<=number; i++){
		if(number%i ==0){
			return 0;
		}
	}	
	return 1;
};

int isPerfectNumber(int number){
	int sum = 0;
	for(int i =1; i<= number/2;i++){
		if(number % i==0){
			sum+= i;
		}
	}
	return number == sum;
};


int sum(int a, int b){
	return a+b;	
};
int minus(int a, int b){
	return a-b;	
};
