#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap vao so nguyen n: ");
	scanf("%d",&n);
	if (n <= 2) {
		printf("%d khong phai la so nguyen to",n);
	}
	else {
		for (int i=2; i<n; i++) {
			if(n%i ==0) {
				printf("%d khong phai la so nguyen to",n);
				break;
			}
			else {
				printf("%d la so nguyen to",n);
				break;
			}
		}
	}
	
	
}
