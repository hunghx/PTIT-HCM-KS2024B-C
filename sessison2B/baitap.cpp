// Baitap tong hop 
#include<stdio.h>

#include<math.h>

int main(){
	// khai bao 2 bien a, b
	float a,b;
	// nhap vao 2 bien : scanf
	printf("Ban hay nhap gia tri cho bien a :");
	scanf("%f", &a);
	printf("Ban hay nhap gia tri cho bien b :");
	scanf("%f", &b);
	
	printf("a = %f va b = %f  \n",a,b);
	
	// Thuc hien cac phep toan 
	printf("%.2f + %.2f = %.2f \n",a, b, a+b);
	printf("%.2f - %.2f = %.2f \n",a, b, a-b);
	printf("%.2f x %.2f = %.2f \n",a, b, a*b);
	printf("%.2f : %.2f = %.2f \n",a, b, a/b);
	
	int c,d,e ;
	printf("Ban hay nhap gia tri cho bien c :");
	scanf("%d", &c);
	printf("Ban hay nhap gia tri cho bien d :");
	scanf("%d", &d);
	printf("Ban hay nhap gia tri cho bien e :");
	scanf("%d", &e);
		// Thuc hien cac phep toan 
	printf("phep toan 1 = %d \n",(c*c + d*d +e*e));
	printf("phep toan 2 = %.2f \n",(1.0/c + 1.0/(d*d)+ 1.0/(e*e*e)));
	printf("phep toan 3 = %.2f \n",sqrt(a)+ sqrt(b+c));
	
	return 0;
	
	// ung dung 
	// nhap 3 so nguyen a,b,c 
	// tinh toan cac gia tri cua bieu thuc va hien thi ra man hinh 
	// 1. a^2 +b^2 +c^2  
	// 2. 1/a + 1/b^2 +1/ c^3
	// 3. can(a) + can(b+c) // thu vien toan hoc hamf sqrt();
	// 4. canbac(a+bc);  // ham cbrt(), pow(a,b) 
}
