#include <stdio.h>

int main() {
	int N, i, a = 1;
	
	scanf_s("%d", &N);

	for(i = 1; i < N; i += a) {
		a++;
	}
	printf("%d", a);
	return 0;
}