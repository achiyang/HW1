#include <stdio.h>

int main() {
	char S[101];
	int len = 0;
	long long sum = 0, temp;

	scanf("%s", S);

	while (S[++len] != '\0');

	for (int i = 0; i < 1 << (len - 1); i++) {
		temp = 0;

		for (int j = 0; j < len - 1; j++) {
			temp = temp * 10 + S[j] - '0';
			if (i & (1 << j)) {
				sum += temp;
				temp = 0;
			}
		}
		temp = temp * 10 + S[len - 1] - '0';
		sum += temp;
		temp = 0;
	}

	printf("%lld", sum);

	return 0;
}