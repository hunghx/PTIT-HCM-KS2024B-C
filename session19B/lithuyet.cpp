#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include<string.h>

// dinh nghia cau truc
// tu khoa struct
// vi du bieu dien cau truc ngay thang nam

// cau truc long : Nested Struct
 struct Date{
	// liet ke cac thanh phan/ dac diem/ thuoc tinh
	// các bien
	int day;
	int month;
	int year;
} ;
typedef struct Date Date;
// tao struct bieu dien thong tin cua sinh vien : 
// ma sv, ten sv, gioi tinh, ngay sinh , sodien thoai, bang diem (5 mon hoc)
struct Student{
	char student_id[5];
	char student_name[25];
	int sex;
	Date birthday; // cau truc long
	char phone[11];
	float points[5]= {0};
};
// ham tao diem random cho sinh vien


void randomPoint(float *arr){
	for(int i =0; i<5; i++){
		*(arr+i) = (float)(rand()%100)/10;
	}
}
int main(){
	// tao bien struct Date : khai báo và khoi tao gia tri
	 Date today = {8,1};
	 Date tomorrow = {9,1,2025};
	// thao tac voi thanh phan, thuoc tinh cua struct : dau (.)
	
	printf("Ngay hom nay là : %d/%d/%d",today.day, today.month, today.year);
	
	
	struct Student dang_quoc_phong = {"S001","Dang Quoc Phong",1,{0},""};
	dang_quoc_phong.birthday = {2,3,2006};
	strcpy(dang_quoc_phong.student_id,"S001");
	
	printf("\nThong tin sinh vien :\n");
	printf("mã sv : %s\n", dang_quoc_phong.student_id);
	printf("ten sv : %s\n", dang_quoc_phong.student_name);
	printf("Ngay sinh : %d/%d/%d\n",dang_quoc_phong.birthday.day,dang_quoc_phong.birthday.month, dang_quoc_phong.birthday.year);
	printf("gioi tinh : %s\n", dang_quoc_phong.sex?"Nam":"Nu");
	printf("so dien thoai : %s\n", dang_quoc_phong.phone);
	printf("Diem sv : %.2f %.2f\n", dang_quoc_phong.points[0],dang_quoc_phong.points[1]);
	// con tro voi struct
	Date *ptrDate ;
	// cap phat dong
	ptrDate = (Date *)calloc(1,sizeof(Date));
//	ptrDate = &tomorrow;
	printf("\nNgay mai là : %d/%d/%d",ptrDate->day, ptrDate->month,ptrDate->year);
	// cau truc voi ham 
	// mang cau truc 
	// mang sinh vien
	struct Student listStudents[100];
//   ung dung : tao struct mo ta thong tin ve laptop : 
//	 ten,
//	 hang laptop, 
//	 kich thuoc(struct : dai, rong , day, can nang), 
//	 mau sac, 
//	 ram , 
//	 gia tien
	return 0;
	}
