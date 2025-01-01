#include<stdio.h>
#include<string.h>
const int max = 50;
char str[max];
void inputString();
int countCharacters(); 
int countOccurrences(char ch);
void reverseString();
void printString();

int main(){
	inputString();
	printString();
	return 0;
}
void inputString(){
	printf("Hay nhap vao chuoi input : ");
	fgets(str,max, stdin);
	printf("Nhap thanh cong \n");
	printf("do dai chuoi la %d\n", countCharacters());
	
	printf("so la xuat hien ki tu a chuoi la %d\n", countOccurrences('a'));
	
	// sao nguoc chuoi
//	reverseString();
	strrev(str);
	printString();
};
int countCharacters(){
	// dem do dai chuoi
	return strlen(str);
}; 
int countOccurrences(char ch){
	int dem =0;
	for(int i = 0; i< strlen(str); i++){
		if(str[i] == ch){
			dem++;
		}
	}
	return dem;
};
void reverseString(){
	int length = strlen(str); // 1,2,3,4,5,6,7,8,9
	for(int i = 0; i < length/2; i++){
		char temp = str[i];
		str[i] = str[length-i-1];
		str[length-i-1] = temp;	
	}
	printString();
};
void printString(){
	printf("Chuoi co gia tri la: ");
	printf("%s\n", str);
};
