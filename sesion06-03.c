#include<stdio.h>
int main(){ 
	int matkhau= 300406;
	int a,i; 
	while(i > 2){
		printf("Moi Ban Nhap Mat Khau : ");
		scanf("%d",&a);
		if(a == matkhau){
			printf("MAT KHAU CHINH XAC");
			i = 3;
			break; 	
			}else {
				printf("MAT KHAU KHONG CHINH XAC \n"); 
			} 
	}
	return 0; 
} 
