#include <stdio.h>

int TimSoLe(int n, int array[]) {
	int SoLeCuoiCung=0;
	
	for(int i=0; i<n; i++) {
		if(array[i]%2==1) {
			SoLeCuoiCung = array[i];
		}
	}
	
	return SoLeCuoiCung;
}
int main() {
	int n;
	printf("Nhap kich thuoc cua mang: ");
	scanf("%d",&n);
	
	int array[n];
	for(int i=0; i<n; i++) {
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&array[i]);
	}
	
	if (TimSoLe(n,array)==0) {
		printf("Mang khong co so le.");
	}
	else {
		printf("So le cuoi cung trong mang la %d",TimSoLe(n,array));
	}

}
