#include <stdio.h>

int tim_so_fibonaci (int vi_tri) {
	int f0,f1,f2;
	f0 = 0;
	f1 = 1;
	f2 = 1;
	
	for (int i=2; i<vi_tri; i++) {
		f0 = f1;
		f1 = f2;
		f2 = f0 + f1;	
	}
	if(vi_tri==0) {
		return f0;
	}
	return f2;
}
int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int m = tim_so_fibonaci(n);
	printf("So Fibonaci thu %d la %d",n,m);
}
