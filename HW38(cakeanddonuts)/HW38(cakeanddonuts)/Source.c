#include <stdio.h>

int main() {
	int X, A, B, donut = 0;

	scanf("%d %d %d", &X, &A, &B);

	X -= A;

	while (X >= B) {
		X -= B;
		donut++;
	}

	printf("%d %d", donut, X);

	return 0;
}