#include <stdio.h>
#include <math.h>
int main() {
	int n;
	int i = 0;
	
	do {
		printf("Nhap so nguyen n: ");
		scanf("%d",&n);
	}
	while(n < 0 && printf("Nhap lai\n"));
	
	while(n != 0){																					
	        i = i * 10 + n%10;
	        n = n / 10;
	    }
	printf("So nghich dao la %d",i);
}

