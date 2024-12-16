



#include<stdio.h>


int main(){
	// nhap vao diem tu 0-> 100 
//	int diem ;
//	char xepLoai[100];
//	printf("Nhap diem tu 0-> 100");
//	scanf("%d",&diem);
//	printf("\n%d",diem);
//	if(diem >= 90){
//		printf("\nXuat sac");
//		// xuat sac
//	}else if(diem >= 80){
//		printf("\nGioi");
//		// gioi
//	}else if(diem >= 70){	
//		printf("\nKha");
//		// kha
//	}else if(diem >=60){
//		// trung binh
//		printf("\nTrung binh");
//	}else {
//		// yeeu 
//		printf("\nYeu");
//	}
	int nam = 1904;
	
	int condition1 = (nam % 4 == 0) && (nam %100 !=0); // chia het cho 4 nhung ko chia het cho 100
	int condition2 = nam % 400 ==0 ; // chia het cho 400
	
	if( nam % 400 == 0 || nam % 4 == 0 && nam %100 !=0  ){
		// la nam nhuan
		printf("nam nhuan");
	}else{
		// ko phai nam nhuan
		printf("ko nam nhuan");
	}
	
	
	return 0;
	
}
	
