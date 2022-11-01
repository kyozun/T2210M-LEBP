#include <stdio.h>
#include <string.h>

void CheckExist (char string_1[], char string_2[]) {
	char *Check;
	Check = strstr(string_1,string_2);
	if (Check != NULL) {
		printf("Yes");
	}
	else {
		printf("No");
	}
}
int main() {
	char string_1[50];
	char string_2[50];
	printf("Input String: ");
	gets(string_1);
	printf("Input Sub String: ");
	gets(string_2);
	
	CheckExist(string_1,string_2);
}
