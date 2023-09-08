#include <stdio.h>

int main() {
	int X;
	
	printf("월을 입력해 주세요 : ");
	scanf_s("%d", &X);

	while (scanf_s("%d", &X) != 1 || X < 1 || X > 12) {
		printf("다시 입력해 주세요 : ");
		scanf_s("%*[^\n]");
	}

	if (X >= 3 && X <= 5) {
		printf("%d월은 봄입니다.\n", X);
	}
	else if (X >= 6 && X <= 8) {
		printf("%d월은 여름입니다.\n", X);
	}
	else if (X >= 9 && X <= 11) {
		printf("%d월은 가을입니다.\n", X);
	}
	else {
		printf("%d월은 겨울입니다.\n", X);
	}
	
	return 0;
}