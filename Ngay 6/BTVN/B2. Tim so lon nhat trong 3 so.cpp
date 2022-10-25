#include <stdio.h>
int so_lon_nhat(int a, int b, int c) {
	int max=a;
	if(b>max) {
		max=b;
	}
	if (c>max) {
		max=c;
	}
	return max;
}
int main() {
	int x,y,z;
	printf("Nhap 3 so: \n");
	scanf("%d%d%d",&x,&y,&z);
	
	int MAX = so_lon_nhat(x,y,z);
	printf("So lon nhat la %d",MAX);
}
