#include <stdio.h>

int main() {
	int N, i, j, index, count = 0, temp, alphabet[2][26] = { 0 };
	char S[101];

	scanf("%d %s", &N, S);

	for (i = 1; i < N; i++) {
		temp = 0;
		for (j = 0; j < 26; j++) {
			alphabet[0][j] = 0;
			alphabet[1][j] = 0;
		}

		for (j = 0; j < i; j++) {
			index = S[j] - 97;
			alphabet[0][index]++;
		}
		for (j = i; j < N; j++) {
			index = S[j] - 97;
			alphabet[1][index]++;
		}

		for (j = 0; j < 26; j++) {
			if (alphabet[0][j] > 0 && alphabet[1][j] > 0) {
				temp++;
			}
		}
		if (count < temp) {
			count = temp;
		}
	}

	printf("%d", count);

	return 0;
}