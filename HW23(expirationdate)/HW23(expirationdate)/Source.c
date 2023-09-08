#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int X, A, B;

	scanf("%d %d %d", &X, &A, &B);

	if (A > B) {
		printf("delicious\n");
	}
	else if (X < B - A) {
		printf("dangerous\n");
	}
	else {
		printf("safe\n");
	}
	return 0;
}