#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int X, t;

	scanf("%d %d", &X, &t);

	printf("%d", X > t ? X - t : 0);

	return 0;
}