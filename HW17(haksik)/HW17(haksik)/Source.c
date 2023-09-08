#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int haksik, discount;

	scanf("%d", &haksik);

	discount = haksik / 15 * 200;
	haksik *= 1000;

	printf("%d %d", discount, haksik - discount);

	return 0;
}