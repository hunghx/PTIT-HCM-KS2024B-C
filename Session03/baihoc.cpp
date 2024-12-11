// khai báo thu vien 
#include<stdio.h>

int main(){
	
	// hàm printf 
	printf("In ra 1 so nguyen %d %.2f %c %-20s\n", -100,4.34567,'R', "KS2024A");
	int a = 10,b,c;
//	printf("\n a = %u" , a );
	
	// doi tuong nhap xuat : stdin , stdout
	// putchar('a')
	putchar('a');
	putchar('b');
	putchar('c');
	
	// hàm nhâp scanf
	scanf("%d%d%d", &a,&b,&c);
	printf("Dia chi o nho bien a = %p\n", &a);
	printf("\n a = %d ; b = %d ; c= %d" , a ,b,c);
	
	// kí tu gan nhat luu trong stdin : \n
	// xoa bo dem cua stdin
	fflush(stdin);

	// getchar(): stdin
	char ch = getchar();
	printf("giá tri bien c = %c\n", ch);
	
	// Nhap chuoi : gets , puts 
	return 0;
	
	
	}
