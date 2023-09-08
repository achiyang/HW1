#include <stdio.h>
#include <string.h>

int main() {
	int N, half_len = 0;
	char S[101];

	scanf("%d %s", &N, S);

	if (N % 2) {
		printf("NO");
		return 0;
	}

	half_len = N / 2;

	if (!strncmp(S, S + half_len, half_len)) {
		printf("%s", S + half_len);
	}
	else {
		printf("NO");
	}

	return 0;
}