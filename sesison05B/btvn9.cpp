// nhap ngay thang nam
#include<stdio.h>

int main(){
	int ngay, thang, nam, ngayTrongThang; // gia su a, b ,c tang dan
	
	printf("Nhap ngay,thang,nam = ");
	scanf("%d%d%d", &ngay,&thang,&nam);
	
	// kiem tra nam (nhuan / ko nhuan)
	
	
	// kiem tra thang(30/31/29/28)
	
	// kiem tra ngay(phu thuoc vao thang)
	int isLeapYear = nam%400 == 0 || (nam%4==0 && nam %100 !=0);
	switch(thang){
		case 2 :
			ngayTrongThang = isLeapYear? 29 :28; // toan tu 3 ngoi
		 	break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			ngayTrongThang =31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			ngayTrongThang =3;
		 	break;	
	}
	
	if(nam<0){
		printf("Nam ko the < 0");
	}else if(thang <1 || thang >12){
		printf("tháng ko the < 0 hoac > 12");
	}else {
		if(ngay <=0 || ngay > ngayTrongThang){
			printf("ngay ko the < 0 và lon hon so ngay trong thang");
		} else{
			printf("Ngay hop le : %d/%d/%d",ngay, thang, nam);
		}
	}
	
	
	return 0;
}
