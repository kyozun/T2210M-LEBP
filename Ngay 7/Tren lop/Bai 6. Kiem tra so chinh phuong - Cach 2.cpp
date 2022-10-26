#include <stdio.h>
#include <math.h>
bool SquareNumber (int n) {
	int sqrt_value = sqrt(n);
	
	if (sqrt_value*sqrt_value == n) {
		return true;
	}
	return false;
}
int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	if(SquareNumber(n)) {
		printf("%d la so chinh phuong",n);
	}
	else {
		printf("%d khong phai la so chinh phuong",n);
	}
}
