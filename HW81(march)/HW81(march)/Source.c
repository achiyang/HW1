#include <stdio.h>

int main() {
	int N, j = 0, cnt = 0;
	char sub_S[100001];

	scanf("%d", &N);

	while (getchar() != '\n');

	for (int i = 0; i < N; i++) {
		char S;

		scanf("%c", &S);

		while (getchar() != '\n');

		if (S == 'M' || S == 'A' || S == 'R' || S == 'C' || S == 'H') {
			sub_S[j++] = S;
		}
	}

	for (int i = 0; i < j - 2; i++) {
		for (int k = i + 1; k < j - 1; k++) {
			if (sub_S[i] != sub_S[k]) {
				for (int l = k + 1; l < j; l++) {
					if (sub_S[i] != sub_S[l] && sub_S[k] != sub_S[l]) {
						cnt++;
					}
				}
			}
		}
	}

	printf("%d", cnt);

	return 0;
}