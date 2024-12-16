#include<stdio.h>


int main(){
	
	// Cau lenh IF : x? li khi dieu kien dung
	if(1){
		// khoi l?nh : block - nhieu cau lenh
		// thuc hienj khi dieu kien dung
		printf("Dieu kien dung");
	}
	
	// IF ... ELSE : x? lí các bài toán có hoac ko co
	if(0){
		printf("\nDieu kien ÌF dung");
	}else{
		printf("\nDieu kien ÌF sai");
	}
	
	// IF ELSE IF : if else thang
	// phan loai rank
	float dtb = 6.7;
	if(dtb < 3){
		// kem
	}else if(dtb < 5){
		// yeu
	}else if(dtb < 6.5){
		// trung binh
	}else if(dtb < 8 ){
		// kha
	}else if(dtb <9 ){
		// gioi
	}else{
		// xuat sac
	}
	
	
	// IF ELSE long nhau 
	if(dtb < 3){
		// kem
	}else{
		if(dtb < 5){
		// yeu
		}else{
			if(dtb < 6.5){
		// trung binh
			}else {
				if(dtb < 8 ){
		// kha
				}else {
					if(dtb <9 ){
		// gioi			
					}else{
		// xua sac
					}	
				}
		// gioi
			}
		}
	}
	
	
	//  câu l?nh switch : kiem tra gia tri cua 1 bieu thuc 
	
	// kiem tra 1 so nguoi dung nhap vao
	int so ;
	scanf("%d",&so);
	
	switch(so){
			case 1 :
				// khoi lenh thuc thi 1
				printf("\n so 1");
				break;
			case 2 :
				// khoi lenh thuc thi 2
				printf("\n so 2");
				break;
			case 3 :
				// khoi lenh thuc thi 3
				printf("\n so 3");
				break;
			case 4 :
				// khoi lenh thuc thi 4
				printf("\n so 4");
				break;
			case 5 :
				// khoi lenh thuc thi 5
				printf("\n so 5");
				break;
			default :
				// mac dinh khi ko roi vao bat cu truong hop nao
				printf("\n Ko hop le");	
				break;
	}
	
	
	// toan tu 3 ngoi : dua vao 1 dieu kien de tính toán giá tri cua bieu thuc
	
	
//	    kieu du lieu ten_bien = ()? bieu thuc neu dieu kien dung   : bieu thuc neu dieu kien sai;

// kiem tra chia het cho 3 ;

		if(so % 3 ==0){
			printf("So chia het cho 3");
		}else{
			printf("So ko chia het cho 3"); // kieu du lieu cua printf() : string ()
		}
		
//	    int soLuong = (so%3 == 0)? printf("\nSo chia het cho 3"):printf("\nSo ko chia het cho 3");
		printf("%s",(so % 3 ==0)?"So chia het cho 3":"So ko chia het cho 3");
	
	return 0;
	}
