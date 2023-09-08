#include <stdio.h>
#include <string.h>

int main() {
	int len, cnt = 0;
	char S[101];

	scanf("%s", S);

	len = strlen(S);

	for (int i = 0; i < len / 2; i++) {
		if (S[i] != S[len - 1 - i]) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}