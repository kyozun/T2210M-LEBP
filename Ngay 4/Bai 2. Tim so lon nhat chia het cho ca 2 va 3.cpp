#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int so_can_tim;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	
	for (int i; i<n; i++) {
		if((i%2==0)&&(i%3==0)) {
			//So can tim la i
			so_can_tim = i;	
		}
	}
	printf("So lon nhat chia het cho ca 2 va 3 la: %d",so_can_tim);
}
