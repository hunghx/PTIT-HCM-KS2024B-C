// BTTH
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#define MAX 100

struct Student{
	char name[20];
	int age;
	float gpa;
	char address[50];
};

// Hàm 

// Ham ghi du lieu
void writeStudentsToFile(struct Student data){
	FILE *f = fopen("C:\\Users\\AD\\CLionProjects\\untitled2\\cmake-build-debug\\data.bin", "ab");
	if(f == NULL){
        // ko mo dc file
        printf("file ko mo dc");
        exit(1);
    }		
    fwrite(&data,sizeof(struct Student), 1, f);
    fclose(f);
};
void readStudentsFromFile(){
	FILE *f = fopen("C:\\Users\\AD\\CLionProjects\\untitled2\\cmake-build-debug\\data.bin", "rb");
	if(f == NULL){
        // ko mo dc file
        printf("file ko mo dc");
        exit(1);
    }	
	struct Student stu;	
    while(fread(&stu,sizeof(struct Student),1,f)!= 0){
    	printf("\n| NAME : %s | Age :%d | Gpa : %.2f | Address :%s|", stu.name,stu.age,stu.gpa,stu.address);	;
    }
    fclose(f);	
}

void findStudentInFile(){

}
void updateStudentGPAInFile(){
	
}
int main(){
// khai bao mang toi da 100 sv
	while(1){
		printf("\n--------MENU----------\n");
		printf("1. Nhap thong tin cho sinh vien\n");
		printf("2. HIen thi danh sach sinh vien\n");
		printf("3. Tim kiem sinh vien theo ten\n");
		printf("4. Cap nhat diem sinh vien\n");	
		int choice;
		printf("Nhap lua chon : ");
		scanf("%d", &choice);
		switch(choice){
			case 1: {
				// nhap so luong sinh vien và thong tin tung sinh vien
				// luu vào file
				int n;
				printf("Nhap so luong sv : ");
				scanf("%d", &n);
				fflush(stdin);
				int i=0;
				for(; i<n;i++){
						// tao 1 sinh vien
						struct Student student;
					    fflush(stdin); // Thêm fflush(stdin)
					    fgets(student.name, sizeof(student.name), stdin);
					    student.name[strcspn(student.name, "\n")] = 0;
					
					    printf("Nhap tuoi: ");
					    scanf("%d", &student.age);
					    fflush(stdin); // Thêm fflush(stdin)
					
					    printf("Nhap diem trung binh: ");
					    scanf("%f", &student.gpa);
					    fflush(stdin); // Thêm fflush(stdin) 
					
					    printf("Nhap dia chi: ");
					    fflush(stdin); // Thêm fflush(stdin) 
					    fgets(student.address, sizeof(student.address), stdin);
					    student.address[strcspn(student.address, "\n")] = 0;	
					    writeStudentsToFile(student);
				}
				printf("Thuc hien luu thanh cong ");
				break;
			}	
			case 2 :
				{
				// hien thi thong tin sinh vien tu file	
				printf("Thog tin sinh vien :\n");
				readStudentsFromFile();
			}
			
		}
	}
	
	
	
}
