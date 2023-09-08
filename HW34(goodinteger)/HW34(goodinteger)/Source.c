#include <stdio.h>

int main() {
	int n, prev_digit, digit;
	int count = 1;

	scanf("%d", &n);

	prev_digit = n % 10;

	while (n /= 10) {
		digit = n % 10;
		if (digit == prev_digit) {
			count++;
		}
		else {
			if (count >= 3) {
				break;
			}
			prev_digit = digit;
			count = 1;
		}
	}

	if (count >= 3) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}