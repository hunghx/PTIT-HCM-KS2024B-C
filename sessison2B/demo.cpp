#include<stdio.h>
// Cac noi dung chinh
// Cu phap 
// khai bao bien 
int integer = 10;
float real;
char character = 'A';
// bien diem toan 
float mathScore = 9.5;
// luu y qui tac dat ten bien
// camelCase


// khai bao hang : const define 
const float PI = 3.14 ;

int main(){
	
	// kiem tra 1 so co chia het cho ca 3 hoac cho 5 hay ko
	int mod3 = integer %3 == 0;  // dung 1 hoac sai 0
	int mod5 = integer %5 == 0; 
	int mod3and5 = mod3 || mod5;
	
	printf("mod3 %d\n",mod3);
	printf("mod5 %d\n",mod5);
	printf("mod3and5 %d\n",!mod3and5);
	
	// thuc hien phep cong va gan
	integer += 100; // integer =integer+100
	printf("integer %d\n",integer);
	
	// toans tu ++ , -- dung tang / giam gia tri 1 don vi
	
	printf("integer %d\n",(integer++)); //111  ?? 110 
	printf("integer %d\n",(integer)); 
	integer= 10;
	// integer 10
	// bai toan 
	int express = integer++ - ++integer + integer++ - ++integer; //-4
	printf("integer %d\n", express); 
	
	
	// Ep kieu : ngam dinh va tuong minh 
	// Kieu du lieu : char, short, int , long , float , double
	
	int a = 1000000 ;
	float b = character;
	printf("a = %d va b = %f  \n",a,b); 
	
	short c = (short)a;
	printf("c = %d  \n",c);
	
	
	
	
}
