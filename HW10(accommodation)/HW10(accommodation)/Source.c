#include <stdio.h>

int main() {
	int N, K, X, Y, money;

	scanf_s("%d %d %d %d", &N, &K, &X, &Y);

	switch (N > K) {
	case 1:
		money = K * X + (N - K) * Y;
		break;

	case 0:
		money = N * X;
		break;
	}

	printf("%d", money);
	return 0;
}