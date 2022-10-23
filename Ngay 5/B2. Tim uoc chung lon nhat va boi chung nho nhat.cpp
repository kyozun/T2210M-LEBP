#include <stdio.h>
#include <math.h>

int main() {
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d%d",&a,&b);

	for (int uc_max=a; uc_max>=1; uc_max--) {
		if((a%uc_max==0 && b) && (b%uc_max==0)) {
			printf("Greatest Common Divisor (UCLN) : %d\n",uc_max);
			break;
		}
	}
	
	for (int bc_min=a; bc_min<=a*b; bc_min++) {
		if((bc_min%a==0) && (bc_min%b==0)) {
			printf("Least Common Multiple (BCNN): %d", bc_min);
			break;
		}
	}
}
