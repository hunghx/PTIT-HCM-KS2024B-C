#include<stdio.h>

int main(){
	int a,b,c, temp; // gia su a, b ,c tang dan
	printf("Nhap a,b,c = ");
	scanf("%d%d%d", &a,&b,&c);
	
	
	// 5,3,7;
	
	if(a > b){
		if(b > c){ //c<b<a
				printf("%d ,%d ,%d",c,b,a);
		}else{	// a>b ,b <=c
			if(a > c){ // b < c <a
				printf("%d ,%d ,%d",b,c,a);
			}else{ // b < a < c
				printf("%d ,%d ,%d",b,a,c);
			}
		}
	}else {
		if(a > c){ //c <a <b
				printf("%d ,%d ,%d",c,a,b);
		}else{	// a>b ,b <=c
			if(b > c){ // a < c <b
				printf("%d ,%d ,%d",a,c,b);
			}else{ // a <b <c
				printf("%d ,%d ,%d",a,b,c);
			}
		}
	}	
	
}
