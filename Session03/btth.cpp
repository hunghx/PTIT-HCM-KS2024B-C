// khai b�o thu vien 
#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,sum;
	float avg;
	// nhap a,b,c
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	printf("Nhap c = ");
	scanf("%d",&c);
	
	// tinh toan
	sum = a+b+c ;
	avg = sum/3.0 ; //  tai sao sai ? 
	
	printf("%d, %d, %d\n",a,b,c);
	printf("Tong : %d \n",sum);
	printf("Trung binh : %.2f \n",avg);
	
	
	// b�i to�n ung dung :
	// B�i to�n l�i k�p ng�n h�ng 
	// So von ban dau gui , lai suat ngan hang 5.12% 
	// Y�u cau nhap v�o so tien gui (tien goc ); t�nh so tien t�ch luy sau so nam nhap vao ?
	// v� du : sotien = 100.000.000 -> so nam = 1 -> tong tien = 105.120.000;
	// sotien = 100.000.000 -> so nam = 2 -> tong tien = 105.120.000 *(1.0512)(1.0512);
	// cong thuc tinh lai kep : tongtien = goc x (1.0512) ^ n;
	
	long soVon ;
	const float LAI = 5.12/100;
	int namGui;
	double laikep;
	
	// nhap von va so nam
	printf("Nhap von = ");
	scanf("%ld",&soVon);
	printf("Nhap so nam gui = ");
	scanf("%d",&namGui);
	// h�m pow(a,b) <=> a^b  
	
	// T�nh laiKep
	laikep = soVon * pow((LAI + 1), namGui );
	
	printf("\n Lai kep = %.2lf",laikep);
	
	return 0;
	
}
