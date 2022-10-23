#include <stdio.h>
#include <math.h>

int main() {
	int n, so_lon_nhat=0;
	do {
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);
	}
	while (n<=0 && printf("Nhap lai\n"));
	
	while (n!=0) {
		int x=n%10;
		if(so_lon_nhat<=x) {
			so_lon_nhat=x;
		}
		n/=10;
	}
	printf("So lon nhat la %d",so_lon_nhat);
}
