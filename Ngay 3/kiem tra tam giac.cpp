#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c,P,p,S;
	printf("Nhap a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	
	if (a>0&&b>0&&c>0) {
		if ((a+b>c)&&(a+c>b)&&(b+c>a)){
			printf("Day la tam giac\n");
			P = a + b + c;
			p = P/2;
			S = sqrt(p*(p-a)*(p-b)*(p-c));
			printf ("Chu vi cua tam giac la %f\nDien tich cua tam giac la %f",P,S);
		}
		else {
			printf("Day khong phai la tam giac");
		}
	}
	else {
		printf("Canh cua tam giac la mot so duong. Vui long nhap lai 3 canh cua tam giac");
	}
}
