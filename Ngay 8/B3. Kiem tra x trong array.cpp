#include <stdio.h>

bool CheckValueExist (int n, int array[], int x) {
	for (int i=0; i<n; i++) {
		if(x==array[i]) {
			return true;
		}
	}
	return false;
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int array[n];
	for(int i=0; i<n; i++) {
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&array[i]);
	}
	
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	
	if (CheckValueExist(n,array,x)) {
		printf("%d co trong mang",x);
	}
	else {
		printf("%d khong co trong mang",x);
	}
}
