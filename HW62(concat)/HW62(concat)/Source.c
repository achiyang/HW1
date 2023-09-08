#include <stdio.h>

int main() {
	char S[1001];
	int w, i, len = 0;

	scanf("%s %d", S, &w);

	while (S[len] != '\0') {
		len++;
	}

	for (i = 0; i < len; i += w) {
		printf("%c", S[i]);
	}

	return 0;
}