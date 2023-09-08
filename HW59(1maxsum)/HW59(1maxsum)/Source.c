#include <stdio.h>

int main() {
	int num[3], sum = 0, K, i;
	int* max = &sum;

	for (i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
		if (*max < num[i]) {
			max = &num[i];
		}
	}

	scanf("%d", &K);

	for (i = 0; i < K; i++) {
		*max <<= 1;
	}

	for (i = 0; i < 3; i++) {
		sum += num[i];
	}

	printf("%d", sum);

	return 0;
}