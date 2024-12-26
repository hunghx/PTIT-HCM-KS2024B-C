#include<stdio.h>
#define MAX 100

int main(){
	int array[MAX]; // khai bao mang
	int n = 0; // luu so luong phan tu mang
	int checkSort = 0;
	// thiet ke  menu 
	while(1){
		
			printf("===================MENU===================\n");
			printf("1. Nhap gia tri mang\n");
			printf("2. In ra mang \n");
			printf("3. Dem so luong so nguyen to trong mang \n");
			printf("4. Tim gia tri nho thu 2\n");
			printf("5. Them phan tu theo vi tri\n");
			printf("6. Xoa phan tu theo vi tri\n");
			printf("7. Sap xep giam dan\n");
			printf("8. Tim kiem phan tu\n");
			printf("9. Xoa phan tu trung lap va hien thi cac phan tu doc nhat\n");
			printf("10. dao nguoc mang\n");	
			printf("0. Thoat\n");
			int choice;
			printf("Nhap lua chon : ");
			scanf("%d", &choice);
			switch(choice){
				case 1:
					printf("Nhap so luong muon them : ");
					scanf("%d", &n);
					for(int i = 0; i<n;i++){
						printf("Nhap Array[%d] : ", i);
						scanf("%d", array+i);
					}
					checkSort = 0;
					printf("nhap thanh cong\n");
					break;
				case 2:
					if(n == 0){
						printf("Mang rong \n");
					}else{
						for(int i = 0; i<n;i++){
							printf("arr[%d] = %d, ", i, array[i]);
						}	
					}
					printf("\n");
					 break;
				case 3:
					{
						// dem so luong so nguyen to
//						printf("vao day\n");
						int dem =0;
						for(int i =0; i<n;i++){
							int so = array[i];
							int checkPrime = 1;
							if(so < 2){
								checkPrime = 0;
							}else{
								for(int j = 2 ; j*j <= so; j++){
									if(so %j ==0){
										checkPrime = 0;
										break;
									}
								}
							}
							if(checkPrime){
								dem++;
							}
						}	
						printf("so luong so nguyen to trong mang la : %d\n",dem);
					}
					 break;
				case 4:
					// 2 bien 
					{
						int min1, min2; // min1 < min2
						if(n<2){
							printf("ko có gia tri be thu 2\n");
						}else{
							if(array[0]<array[1]){
								min1 =array[0];
								min2 = array[1];
							}else{
								min1 =array[1];
								min2 = array[0];
							}
							
							for(int i = 2; i< n ; i++){
								if(array[i]< min1){
									min2 = min1;
									min1 = array[i];
								}else{
									if(array[i]<min2){
										min2 = array[i];	
									}
								}	
							}
							printf("Phan tu nho thu 2 trong mang la : %d\n", min2);
						}
						
					}
					 break;
				case 5:
					// them phan tu theo vi tri
					{
						int index, value;
						printf("Nhap vi tri can chen : ");
						scanf("%d", &index);
						printf("Nhap giá tri can chen : ");
						scanf("%d", &value);
						if(index <0 ||index >n){
							printf("Vi tri chen ko hop le \n");	
						}else{
							for(int i =n; i>index; i--){
								array[i] = array[i-1];	
							}
							array[index] = value;
							n++;
							printf("them thanh cong\n");
							checkSort =0;
						}
						
					}
					 break;
				case 6:
					{
						int index;
						printf("Nhap vi tri can xoa : ");
						scanf("%d", &index);
						if(index <0 ||index >=n){
							printf("Vi tri chen ko hop le \n");	
						}else{
							for(int i = index; i<n-1; i++){
								array[i] = array[i+1];	
							}
							n--;
							printf("xoa thanh cong\n");
						}
						
					}
					 break;
				case 7:
						
						for(int i = 0 ; i<n ; i++){
							int minValue = array[i];
							int minIndex = i;
							for(int j = i+1; j< n; j++){
								if(minValue < array[j]){
									minValue = array[j];
									minIndex = j;
								}
							}
							if(minIndex != i){
								array[minIndex] = array[i];
								array[i] = minValue; 
							}	
						}
						printf("sap xep thanh cong \n");
						checkSort =1;
					 break;
				case 8:
					if(checkSort){
						// tim kiém
						int search;
						printf("Nhap gia tri can tim : ");
						scanf("%d", &search);
						int start, end, mid;
						start = 0;
						end = n-1;
						while(start <= end)
						{
							mid = start + (end-start)/2;
							
							if(array[mid]== search){
								// tim thay
								printf("%d duoc tim thay tai vi tri %d\n ", search, mid);
								break;
							}else if(array[mid]< search){
								// ben phai vi tri mid	
								start = mid +1;
							}else{
								// ben trai mid
								end = mid -1;
							}
						}
						if(start > end){
								printf("\nko tim thay gia tri %d trong mang\n", search);
						}
					}else{
						printf("Mang chua dc sap xep, vui long chon chuc nang so 7\n");
					}
					 break;
				case 9:
					// loai bo phan tu trung lap
					{
						int arrDistinct[n];
						int size=0; // kich thuoc cua mang ko trung lap
						for(int i =0; i<n;i++){	
							int flag = 1;
							for(int j=0; j< size; j++){
								if(arrDistinct[j]== array[i]){
									flag = 0;
									break;
								}
							}
							if(flag){
								arrDistinct[size++] = array[i];	
							}
						}
						
						// cap nhat lai mang ban dau
						for(int i = 0; i<size; i++){
							printf("%d ", arrDistinct[i]);
							array[i] = arrDistinct[i];	
						}
						n = size;
						printf("\n");
						printf("Da loai bo phan tu\n");
					}
					break;
				case 10:
					// dao nguoc
					for(int i = 0; i< n/2; i++){ // n = 11, 0,1,2,3,4,5,6,7,8,9,10
						int temp = array[i];
						array[i] = array[n-1-i];
						array[n-1-i] = temp;
					}
					
					printf("Da dao nguoc mang\n");
					 break;
				case 0:
					 return 0;
				default:
					printf("Lua chon ko hop le \n");
					break;
				
			}
			
	}
	return 0;
}
