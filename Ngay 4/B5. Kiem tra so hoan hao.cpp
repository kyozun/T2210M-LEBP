#include <stdio.h>
#include <math.h>
int main() {
	int n,S;
	
	do {
		printf("Nhap so nguyen n: ");
		scanf("%d",&n);	
	}
	while (n<=0 && printf("Nhap lai\n"));
	
	for (int i; i<n; i++) {
		if (n%i == 0) {
			S+=i;	
		}
	}
	
	if(S==n) {
		printf("%d la so hoan hao",n);
	}
	else {
		printf("%d khong phai la so hoan hao",n);
	}
}

