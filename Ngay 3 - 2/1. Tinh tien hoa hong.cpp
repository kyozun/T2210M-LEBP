#include <stdio.h>
#include <math.h>

int main() {
	float doanh_so,tien_hoa_hong;
	printf("Nhap doanh so: ");
	scanf("%f",&doanh_so);
	if (doanh_so<=100000000) {
		tien_hoa_hong = doanh_so*5/100;
	}
	if (doanh_so<=300000000) {
		tien_hoa_hong = doanh_so*10/100;
	}
	if (doanh_so>300000000) {
		tien_hoa_hong = doanh_so*20/100;
	}
	printf("Tien hoa hong la %f",tien_hoa_hong);
}
