#include <stdio.h>

int main() {
	int N, A, B, i, temp, sum_digit, total = 0;

	scanf("%d %d %d", &N, &A, &B);

	for (i = 1; i <= N; i++) {
		temp = i;
		sum_digit = 0;

		while (temp) {
			sum_digit += temp % 10;
			temp /= 10;
		}

		if (sum_digit >= A && sum_digit <= B) {
			total += i;
		}
	}

	printf("%d", total);

	return 0;
}