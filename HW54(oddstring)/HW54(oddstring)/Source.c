#include <stdio.h>

int main() {
	char S[101];
	int len = 0, i;

	scanf("%s", S);

	while (S[len] != '\0') {
		len++;
	}

	for (i = 0; i < len; i += 2) {
		printf("%c", S[i]);
	}

	return 0;
}