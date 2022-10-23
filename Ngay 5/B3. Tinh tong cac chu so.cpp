#include <stdio.h>
#include <math.h>

int main() {
	int n, S=0;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	
	while (n!=0) {
		S += n%10;
		n /= 10;
	}
	
	printf("Tong cac chu so la %d",S);
}



