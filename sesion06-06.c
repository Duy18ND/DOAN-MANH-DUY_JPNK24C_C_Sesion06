#include<stdio.h>
int main(){
	int n;
	while(1){
		printf("Nhap So Nguyen Tu (1 - 100)   ");
	scanf("%d",&n);
	if(n <= 0 || n >100){
		printf("So Nguyen Cua Ban Khong Hop Le \n ");
	}
	if(n % 3 == 0 && n % 5 == 0){
		printf("FizzBuzz \n");
	}else if(n % 3 == 0){
		printf("Fizz \n");
	}else if(n % 5 == 0){
		printf("Buzz \n");
	}else{
		printf("So nguyen cua ban khong la boi so \n");
			
	}
	}
	return 0;
}
