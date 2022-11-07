#include <stdio.h>

int STTCuaSoBeNhat(int array[], int n) {
	int min = array[0];
	int index = 0;
	
	for (int i=0; i<n; i++) {
		if(array[i]<min) {
			min = array[i];
			index = i;
		}
	}
	return index;
}

int main() {
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	int array[n];
	for (int i=0; i<n; i++) {
		printf("array[%d]: ",i);
		scanf("%d", &array[i]);
	}

	printf("Index of the smallest element: %d",STTCuaSoBeNhat(array,n));
}
