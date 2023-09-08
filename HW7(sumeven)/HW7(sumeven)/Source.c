#include <stdio.h>

int main() {
	int X, i, sum = 0;

	scanf_s("%d", &X);

	for (i = 2; i <= X; i += 2) {
		sum += i;
	}

	printf("%d", sum);
	return 0;
}