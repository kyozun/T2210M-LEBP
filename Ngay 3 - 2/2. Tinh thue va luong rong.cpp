#include <stdio.h>
#include <math.h>

int main() {
	double x, tien_thue, luong_rong;
	printf("Nhap tien luong: ");
	scanf("%lf",&x);
	if (x>15000000) {
		tien_thue=x*30/100;
		luong_rong=x-tien_thue;
	}
	else if (7000000<=x && x<=15000000) {
		tien_thue=x*20/100;
		luong_rong=x-tien_thue;
	}
	else {
		tien_thue=x*10/100;
		luong_rong=x-tien_thue;
	}
	printf("Tien thue la %lf\nTien luong rong la %lf",tien_thue,luong_rong);
}
