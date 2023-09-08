#include <stdio.h>

void convert2octal(int* ip) {
	int octal = 0, count = 1;
	while (*ip > 0) {
		octal += (*ip % 8) * count;
		*ip /= 8;
		count *= 10;
	}

	printf("%d", octal);
}

void main() {
	int decimal;

	scanf("%d", &decimal);

	convert2octal(&decimal);
}