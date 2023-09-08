#include <stdio.h>

int main() {
	char S[101], T[101];

	scanf("%s %s", S, T);

	for (int i = 0; S[i] != '\0'; i++) {
		printf("%c%c", S[i], T[i]);
	}

	return 0;
}