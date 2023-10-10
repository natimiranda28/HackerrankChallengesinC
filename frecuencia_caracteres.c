//Given a string S , consisting of alphabets and digits, find the frequency of each digit in the given string.

#include <stdio.h>
#include <string.h>

int main() {
	char s[1000];
	int freq[10] = {0};
	
	
	scanf("%s", s);
	
	for (int i = 0; i < strlen(s); i++) {
		char c = s[i];
		if (c >= '0' && c <= '9') {
			int digit = c - '0';
			freq[digit]++;
		}
	}
	
	
	for (int i = 0; i < 10; i++) {
		printf("%d ", freq[i]);
	}
	
	return 0;
}
