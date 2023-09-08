#include <stdio.h>

int main() {
	int n, count = 0;

	scanf("%d", &n);

	while (1) {
		int reverse = 0, temp = n;
		while (temp > 0) {
			reverse = reverse * 10 + temp % 10;
			temp /= 10;
		}
		if (n == reverse) {
			break;
		}
		n += reverse;
		count++;
	}

	printf("%d %d", count, n);
}