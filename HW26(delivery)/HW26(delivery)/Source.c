#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, a, b, distance_a, distance_b;

	scanf("%d %d %d", &x, &a, &b);

	distance_a = x > a ? x - a : a - x;
	distance_b = x > a ? x - b : b - x;

	printf("%d", distance_a > distance_b ? distance_a : distance_b);
	return 0;
}