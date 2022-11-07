#include <stdio.h>
#include <string.h>

int main() {
	printf("Enter 10 integers: \n");
	int array[10];
	for (int i=0; i<10; i++) {
		printf("a[%d]: ",i+1);
		scanf("%d",&array[i]);
	}
	
	printf("Display in the reversed order: \n");
	
	for (int i=9; i>=0; i--) {
		printf("%d\n",array[i]);
	}
}
