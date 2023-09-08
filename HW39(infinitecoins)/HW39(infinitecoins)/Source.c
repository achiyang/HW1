#include <stdio.h>

int main() {
	int n, a;

	scanf("%d %d", &n, &a);

	if (n % 500 <= a) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}