#include <stdio.h>

int main() {
	int N, i = 2;

	scanf("%d", &N);

	while (i <= N) {
		i <<= 1;
	}

	printf("%d", i >> 1);

	return 0;
}