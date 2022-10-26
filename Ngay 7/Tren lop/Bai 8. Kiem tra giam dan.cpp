#include <stdio.h>

bool KiemTraGiamDan (int n) {
	int so_cuoi_cung = n%10;
	n/=10;
	
	while (n!=0) {
		int so_gan_cuoi = n%10;
		if (so_gan_cuoi < so_cuoi_cung) {
			return false;
		}
		so_cuoi_cung = so_gan_cuoi;
		n/=10;
	}
	return true;
}
int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	
	if(KiemTraGiamDan(n)) {
		printf("Co giam dan",n);
	}
	else {
		printf("Khong giam dan",n);
	}
}
