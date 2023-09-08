#include <stdio.h>

convert2decimal(int* ip) {
	int decimal = 0, count = 1;
	while (*ip > 0) {
		decimal += (*ip % 10) * count;
		*ip /= 10;
		count *= 8;
	}

	printf("%d", decimal);
}

void main() {
	int octal;

	scanf("%d", &octal);

	convert2decimal(&octal);
}