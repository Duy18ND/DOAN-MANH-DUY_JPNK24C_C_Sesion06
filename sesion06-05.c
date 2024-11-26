#include<stdio.h>
int main(){
int nam,thang,ngay;
	//Nguoi Dung Nhap Vao Nam,Thang
printf("Nhap Nam ");
scanf("%d",&nam);
printf("Nhap thang ",&thang);
scanf("%d");
	//tinh nam nhuan thang 2 co 29 ngay
if(nam % 4 == 0 && nam % 100 == 0 && nam % 400 ==0){
	ngay = 29;
}else{
	ngay = 28;
} 
 
switch(thang){
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
		ngay = 31;
		printf("Ngay %d - Thang %d - Nam %d",ngay,thang,nam);
		break;
	}
	case 4: case 6: case 9: case 11:{
		ngay = 30;
		printf("Ngay %d - Thang %d - Nam %d",ngay,thang,nam);
		break;
	}
	case 2: {
		printf("Ngay %d - Thang %d - Nam %d",ngay,thang,nam);
		break;
	}
}
return 0; 
}
