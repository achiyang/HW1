#include <stdio.h>
#include <string.h>

int main() {
	char S[101];
	int cnt = 0, len;

	scanf("%s", S);

	len = strlen(S);

	for (int i = 0; i < len - 1; i++) {
		if (S[i] != S[i + 1]) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}