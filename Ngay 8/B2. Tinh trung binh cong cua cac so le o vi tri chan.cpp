#include <stdio.h>

float TrungBinhCong (int array[], int n) {
	float S=0;
	int SoCacSoLe=0;
	
	for(int i=0; i<n; i++) {
		if((array[i]%2==1) && (i%2==0)) {
			S+=array[i];
			SoCacSoLe++;
		}
	}
	
	return S/SoCacSoLe;
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
	
	float Average=TrungBinhCong(array,n);
	printf("\nTrung binh cong la %f",Average);
		
}
