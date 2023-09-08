#include <stdio.h>

int main() {
	int N, cnt = 0;

	scanf("%d", &N);

	for (; N != 0; N /= 10) {
		if (N % 10 == 1) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}