#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, MAX, sum;

	scanf("%d %d %d", &a, &b, &c);

	MAX = a > b ? a : b;
	MAX = MAX > c ? MAX : c;

	if (MAX == a) {
		sum = b + c;
	}
	else if (MAX == b) {
		sum = a + c;
	}
	else {
		sum = a + b;
	}

	printf("%d\n", sum);

	return 0;
}