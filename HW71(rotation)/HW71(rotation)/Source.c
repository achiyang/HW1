#include <stdio.h>

int main() {
	int num;
	char S[10001];

	scanf("%d %s", &num, S);

	for (int i = 0; S[i] != '\0'; i++) {
		if (S[i] + num > 'Z') {
			S[i] += num - 26;
		}
		else {
			S[i] += num;
		}
	}

	printf("%s", S);

	return 0;
}