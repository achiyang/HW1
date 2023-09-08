#include <stdio.h>

int main() {
	int i, K, N, alphabet;
	char S[11];

	scanf("%d %s %d",&N, S, &K);

	alphabet = S[K - 1];

	for (i = 0; i < N; i++) {
		if (S[i] != alphabet) {
			S[i] = '*';
		}
	}

	printf("%s", S);

	return 0;
}