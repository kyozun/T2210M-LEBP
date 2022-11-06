#include <stdio.h>

int GTLNCuaHaiSo(int CountOne, int CountTwo) {
	int max;
	if (CountOne>CountTwo) {
		max = CountOne;	
	}
	else {
		max = CountTwo;
	}
	return max;
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	//Nhap array
	int array[n];
	for (int i=0; i<n; i++) {
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&array[i]);
	}
	//Tao 2 bien dem
	int CountOne = 0, CountTwo = 0;
	for (int i=0; i<n; i++) {
		if (array[i] > 0) {
			CountOne++;
		}
		else {
			CountOne = 0;
		}
		CountTwo = GTLNCuaHaiSo(CountOne,CountTwo);
	}
	
	printf("Total: %d",CountTwo);
}
