#include <stdio.h>

int main() {
	int count = 1;
	char S[257];

	fgets(S, sizeof(S), stdin);

	for (int i = 0; S[i] != '\0'; i++) {
		if (S[i] == ' ') {
			count++;
		}
	}

	printf("%d", count);

	return 0;
}