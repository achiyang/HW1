#include <stdio.h>

int main() {
	int a, b, x, cnt = 0;

	scanf("%d %d %d", &a, &b, &x);

	for (; a <= b; a++) {
		if (a % x == 0) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}