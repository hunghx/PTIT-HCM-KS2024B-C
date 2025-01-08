// Bai tap so 8, dao nguoc chuoi 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	// khai báo 2 bien con tro 
	char *inputString, *reverseString; // con tro NULL
	// cap phat dong
	inputString = (char *)malloc(100*sizeof(char));
	reverseString = (char *)malloc(100*sizeof(char));
	// nhap  chuoi
	printf("Nhap vao chuoi input : ");
	gets(inputString);
	// dao nguoc chuoi va luu vao bien reverseString
	// su dung ham strrev
	// luu vao bien reverse : su dung ham copy
//	strcpy(reverseString, inputString);
//	strrev(reverseString);
	
	
	// su dung logic
	int length = strlen(inputString);
	for(int i = length-1;i>=0; i--){
//		reverseString[length-1-i] = inputString[i];
		*(reverseString+length -i -1) = *(inputString+i);
	}
		
	// in ra ket qua
	printf("chuoi input : %s\n", inputString);
	printf("chuoi rev : %s\n", reverseString);
	return 0;
	}





