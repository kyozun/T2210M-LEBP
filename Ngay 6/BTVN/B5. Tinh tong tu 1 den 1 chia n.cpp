#include <stdio.h>
#include <math.h> 

float tinh_tong(int gia_tri_cua_n) {
	float S=0;
	for (int i=1; i<=gia_tri_cua_n; i++){
		S+=(float)1/i;
	}
	
	return S;
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	
	float ket_qua=tinh_tong(n);
	printf("Tong tu 1 den 1/%d la %f",n,ket_qua);
}
