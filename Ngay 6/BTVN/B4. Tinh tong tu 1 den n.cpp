#include <stdio.h>

int tinh_tong(int gia_tri_cua_n) {
	int S=0;
	for (int i=0; i<=gia_tri_cua_n; i++) {
		S+=i;
	}
	return S;
}
int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	int ket_qua = tinh_tong(n);
	printf("Tong tu 1 den %d la %d",n,ket_qua);
}
