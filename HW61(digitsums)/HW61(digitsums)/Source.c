#include <stdio.h>

int main() {
	int N, digit, temp, S = 0;

	scanf("%d", &N);

	temp = N;

	while (temp) {
		digit = temp % 10;
		S += digit;
		temp /= 10;
	}

	if (N % S == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}