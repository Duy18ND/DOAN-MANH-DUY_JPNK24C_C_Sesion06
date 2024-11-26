#include<stdio.h>

int main(){
	int number, sumsole = 0; 
	for(int stt = 1;stt <= 5;stt++){
		printf("Moi Ban Nhap Vao So Nguyen Thu %d La : ",stt);
		scanf("%d",&number);
			if (number % 2 != 0){
			sumsole += number;
		} 	
	}
	printf("Tong So le la: %d",sumsole);	
	return 0;
}
