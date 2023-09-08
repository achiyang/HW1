#include <stdio.h>

void print_prime(int* np, int* mp) {
	for (int i = *np; i <= *np + *mp; i++) {
		int prime = 1;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				prime = 0;
				break;
			}
		}
		if (prime) {
			printf("%d\n", i);
		}
	}
}

void main() {
	int n, m;

	scanf("%d", &n);

	scanf("%d", &m);

	print_prime(&n, &m);
}