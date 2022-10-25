#include <stdio.h>
#include <math.h>

int so_dao_nguoc(int a) {
	int so_can_tim=0;
	while(a!=0) {
		so_can_tim = so_can_tim*10 + a%10;
		a/=10;
	}
	return so_can_tim;
}
int main() {
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	
	int m = so_dao_nguoc(n);
	printf("So dao nguoc cua %d la %d ",n,m);
}
