#include <stdio.h>

int main() {
	int X;
	
	printf("���� �Է��� �ּ��� : ");
	scanf_s("%d", &X);

	while (scanf_s("%d", &X) != 1 || X < 1 || X > 12) {
		printf("�ٽ� �Է��� �ּ��� : ");
		scanf_s("%*[^\n]");
	}

	if (X >= 3 && X <= 5) {
		printf("%d���� ���Դϴ�.\n", X);
	}
	else if (X >= 6 && X <= 8) {
		printf("%d���� �����Դϴ�.\n", X);
	}
	else if (X >= 9 && X <= 11) {
		printf("%d���� �����Դϴ�.\n", X);
	}
	else {
		printf("%d���� �ܿ��Դϴ�.\n", X);
	}
	
	return 0;
}