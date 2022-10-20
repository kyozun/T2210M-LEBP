#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap vao so nguyen: ");
	scanf("%d",&n);
	
	for (int i; i<n; i++) {
		if (i%2!=0) {
			printf("%d ",i);	
		}
	}
}
