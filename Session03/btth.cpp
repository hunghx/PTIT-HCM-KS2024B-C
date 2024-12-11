// khai báo thu vien 
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
	
	
	// bài toán ung dung :
	// Bài toán lãi kép ngân hàng 
	// So von ban dau gui , lai suat ngan hang 5.12% 
	// Yêu cau nhap vào so tien gui (tien goc ); tính so tien tích luy sau so nam nhap vao ?
	// ví du : sotien = 100.000.000 -> so nam = 1 -> tong tien = 105.120.000;
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
	// hàm pow(a,b) <=> a^b  
	
	// Tính laiKep
	laikep = soVon * pow((LAI + 1), namGui );
	
	printf("\n Lai kep = %.2lf",laikep);
	
	return 0;
	
}
