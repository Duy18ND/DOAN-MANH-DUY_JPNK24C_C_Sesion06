#include<stdio.h>

int main(){
	int number;
	int sochan = 0;
	int sole = 0; 
	for(int stt = 1;stt <= 5;stt++){
		printf("Moi Ban Nhap Vao So Nguyen Thu %d La : ",stt);
		scanf("%d",&number);
		if(number % 2 == 0){
		++sochan;	 
		}else {
		++sole; 
		}	
	}
	printf("Tong So Chan La: %d \n",sochan);
		printf("Tong So Le La: %d",sole); 		
	return 0;
}
