#include <stdio.h>

int countcase(int N, int K);

int main() {
	int N, K, num_case, i;

	scanf("%d %d", &N, &K);

	printf("%d", countcase(N, K));

	return 0;
}

int countcase(int N, int K) {
	if (N == 1) {
		return K;
	}
	else {
		return countcase(N - 1, K) * (K - 1);
	}
}