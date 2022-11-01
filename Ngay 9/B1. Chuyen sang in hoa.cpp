#include <stdio.h>
#include <string.h>

void ToUpperCase(char text[]) {
	char UpperCase;
	
	for(int i=0; i<strlen(text); i++) {
		if(text[i] >= 'a' && text[i] <= 'z') {
			text[i]-=('a' - 'A');
		}	
	}
	
	printf("After: %s",text);
}

int main() {
	char text[50];
	printf("Before: ");
	gets(text);
	
	ToUpperCase(text);
}
