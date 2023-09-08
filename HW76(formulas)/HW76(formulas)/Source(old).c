#include <stdio.h>
#include <string.h>

int main() {
	char S[101];
	int k;
	long long len, reps, temp = 0, sum = 0;

	scanf("%s", S);

	len = strlen(S);

	reps = (long long)1 << (len - 1);

	for (int i = 0; i < reps; i++) {
		k = 0;

		for (int j = 0; j < len - 1; j++) {
			if (i & (1 << j)) {
				while (k <= j) {
					temp = temp * 10 + S[k] - '0';
					k++;
				}
				sum += temp;
				temp = 0;
			}
		}

		while (k < len) {
			temp = temp * 10 + S[k] - '0';
			k++;
		}
		sum += temp;
		temp = 0;
	}

	printf("%lld", sum);

	return 0;
}