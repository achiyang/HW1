#include <stdio.h>

int main() {
	int X;

	printf("1에서 100사이의 값을 입력해주세요 : ");

	while (scanf_s("%d", &X) != 1 || X < 1 || X>100) {
		printf("다시 입력해 주세요 : ");
		scanf_s("%*[^\n]");
	}

	for (X = X; X >= 1; X--) {
		printf("카운트다운 %d\n", X);
	}
	
	return 0;
}