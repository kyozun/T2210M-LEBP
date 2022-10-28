#include <stdio.h>

float TrungBinhCong(int array[], int n) {
	float S=0;
	int SoCacSoLe=0;
	
	for (int i=0; i<n; i++){
		if(array[i]%2==1) {
			S+=array[i];
			SoCacSoLe++;
		}
	}
	return S/SoCacSoLe;
}

int main() {
	int n;
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	
	int array[n];
	for (int i=0; i<n; i++){
		printf("Phan tu thu %d: ",i);
		scanf("%d",&array[i]);
	}
	
	float Average = TrungBinhCong(array,n);
	printf("Trung binh cong la %f",Average);
}
