#include <stdio.h>
#include <math.h>

int main() {
	int n,S;
	do {
		printf("Nhap so nguyen n: ");
		scanf("%d",&n);	
	}
	
	while (n<=0 && printf("Nhap lai\n"));
	
	for (int i=1; i<=n; i++) {
		if (n%i==0) {
			printf("%d ",i);
			S+=i;
		}
	}
	
	printf("Tong cac uoc la: %d",S);
}
