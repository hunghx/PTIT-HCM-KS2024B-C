#include<stdio.h>


int main(){

// Nhap só N
int n;
printf("\nnhap n");
scanf("%d",&n);
int sum = 0;

// 1. tong
for(int i = 1; i <= n; i++){
	sum =sum +i;
}
printf("Tong : %d\n", sum);


// 2. in ra lan luot : 1,2,3,4
for(int i = 1; i <= n; i++){
	printf("%d,",i);
}
printf("\n");
// 3, so chan
for(int i = 1; i <= n; i++){
	if(i%2==0){
		printf("%d,",i);
	}
}

int giaiThua = 1;
// 4 giai thua
for(int i = 1; i <= n; i++){
	giaiThua = giaiThua * i;
}
printf("\nGiai thua : %d\n", giaiThua);
return 0;

}
