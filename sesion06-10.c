#include<stdio.h>
int main(){
	int n ;
	//nhap gia tri cho n
	printf("Nhap gia tri bat ky: "),
	scanf("%d",&n);
	//khoi tao bien count = 0
	int count = 0;
	int number = 2;
	while(count < n){
		int flag = 0;
		for(int i = 2; i < number; i++ ){
			if(number % i == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			printf("%3d \n",number);
			count++;
			
		}
		number++;
	}
	return 0;
}
