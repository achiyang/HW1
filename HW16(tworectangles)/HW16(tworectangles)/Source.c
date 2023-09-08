#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned int A, B, C, D, rectangle1, rectangle2;

	scanf("%d %d %d %d", &A, &B, &C, &D);

	rectangle1 = A * B;
	rectangle2 = C * D;

	printf("%d", rectangle1 > rectangle2 ? rectangle1 : rectangle2);

	return 0;
}