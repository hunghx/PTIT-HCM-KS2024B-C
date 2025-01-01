#include<stdio.h>
#include<string.h>

int main(){
	
	
	// khai bao chuoi 
	// String Literal
	char str[7] = "Hunghx";
	char arr[4] = {'r','i','k','\0'};
	 
	printf("%s\n", str);
	printf("%s", arr);
	
	// ki tu '\0' là kí tu cuoi cung trong mang ki tu
	
	// tinh do dai chuoi
	printf("\ndo dai chuoi là %d ", sizeof(str)/sizeof(char));
	// dung ham strlen
	printf("\ndo dai chuoi là %d ", strlen(str));
	
	// duyet tung ki tu
	for(int i = 0; i<strlen(str); i++){
		printf("\n ki tu tai vi tri thu %d la %c", i, str[i]);	
	}
	printf("\n");
	str[3]= 'O';
		printf("%s\n", str);
	// nhap chuoi 
	char phone[12];
	//	int a;
	//	scanf("%d", &a);
	//	fflush(stdin); // xoa bo dem
	// ham fgets
	printf("Hay nhap so dien thoai cua ban :");
	//	fgets(phone, 12, stdin);
	gets(phone);


	printf("So dien thoai cua ban la %s \n", phone);
	//	fputs(phone, stdout);

	// các phuong thuc / ham : thuc hien chuc nang co ban
	// noi chuoi
	char str1[] = "Hunghx ";
	char str2[] = "Rikkei";
	printf("Truoc khi noi %s \n", str1);
	strcat(str1," ");
	strcat(str1,str2);	
	printf("Sau khi noi %s \n", str1);
	// ham copy
	char str3[10];
	strcpy(str3, str2);
	printf("Sau khi copy %s \n", str3);
	// ham so sánh : >, = ,<
	int com = strcmp(str2, str3);
	printf("%d\n", com);
	// kiem tra ton tai : tra ve con tro
//	char* check = strstr(str1,"Rikkei");
//	printf("%p", check);
	// kiem tra ton tai kí tu
	
//	char *kq = strchr(str1,'h');// con tro	
	printf("%p", strchr(str1,'h'));


	return 0;
	}
