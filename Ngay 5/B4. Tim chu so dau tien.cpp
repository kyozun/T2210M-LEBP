#include <stdio.h>
#include <math.h>

int main() {
	int n, so_dau_tien;
	do {
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);	
	}
	while (n<=0 && printf("Nhap lai\n"));
	
	while (n!=0) {
		so_dau_tien = n%10;
		n/=10;
	}
	printf("Chu so dau tien la %d",so_dau_tien);

}
