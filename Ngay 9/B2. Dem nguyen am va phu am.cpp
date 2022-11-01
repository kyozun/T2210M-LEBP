#include <stdio.h>
#include <string.h>

int DemNguyenAm (char Text[]) {
	char Vowel[] = "aAiIuUeEoO";
	int CountVowel = 0;
	
	for (int i=0; i<strlen(Text); i++) {
		for (int j=0; j<strlen(Vowel); j++) {
			if(Text[i]==Vowel[j]) {
				CountVowel++;
			}
		}
	}
	return CountVowel;
}
int main() {
	char Text[50];
	printf("Input: ");
	gets(Text);
	
	printf("Vowel: %d\n",DemNguyenAm(Text));
	printf("Other Characters: %d", strlen(Text) - DemNguyenAm(Text));
}
