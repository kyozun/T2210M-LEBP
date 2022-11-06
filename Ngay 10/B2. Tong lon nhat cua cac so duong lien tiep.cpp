#include <stdio.h>

int GTLNCuaHaiSo(int Tong_1, int Tong_2) {
	if (Tong_1>Tong_2) {
		return Tong_1;	
	}
	else {
		return Tong_2;
	}
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
	int Tong_1 = 0, Tong_2;
	for (int i=0; i<n; i++) {
		if (array[i] > 0) {
			Tong_1 += array[i];
		}
		else {
			Tong_1 = 0;
		}
		Tong_2 = GTLNCuaHaiSo(Tong_1,Tong_2);
	}
	
	printf("Sum: %d\n",Tong_2);
}
