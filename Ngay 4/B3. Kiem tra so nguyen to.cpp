#include <stdio.h>
#include <math.h>

int main() {
	int n, so_uoc=0;
	do {
		printf("Nhap vao so nguyen n: ");
		scanf("%d",&n);
	}
	while (n<=0 && printf("Nhap lai\n"));
	
	for (int i=1; i<=n; i++) {
		if(n%i==0) {
			so_uoc+=1;
		}
	}
	
	if (so_uoc==2) {
		printf("%d la so nguyen to",n);
	}
	else {
		printf("%d khong phai so nguyen to",n);
	}
}
