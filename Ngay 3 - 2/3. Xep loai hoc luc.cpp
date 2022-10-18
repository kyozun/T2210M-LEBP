#include <stdio.h>
#include <math.h>

int main() {
	float x;
	printf("Nhap diem trung binh: ");
	scanf("%f",&x);
	if (0<=x && x<=10) {
		if(x>=9) {
			printf("Hang A");
		}
		else if (7<=x && x<9) {
			printf("Hang B");
		}
		else if (5<=x && x<7) {
			printf("Hang C");
		}
		else {
			printf("Hang F");
		}	
	}
	else {
		printf("Diem khong hop le");
	}
	
}
