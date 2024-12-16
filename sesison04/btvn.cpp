#include<stdio.h>
#include<math.h>
int main(){
	// ve so do flow chart
	// khi n >=2 , kiem tra tu 2-> can bac 2 cua n xem có ton tai uoc nào trong khoang do hay ko
	// nhan thay viec kiem tra tu 2-> can bac 2 cua n thuc hien lap lai nhieu lan 
	int n,N ;// N la so can kiem tra 
	printf("nhap so n :");
	scanf("%d",&n);
	int count = 0;
	for(N = 2 ; count < n ; N++){
		int flag = 1; // gia su day la so nguyen to 
	
		if(N <2){
			// ko là so nguyen to	
			flag =0;
		}else{
			
			for(int i = 2 ; i<= sqrt(N) ;i++){
				if(N % i == 0){
					// ko la so nguyen to	
					flag = 0;
					break; // thoat khoi vong lap ngay lap tuc
				}
			}
			
		}
		
		if(flag){
			count++;
			printf("%d, ",N);
		}
		
	}
	
	
	return 0;	
	
}
