#include <stdio.h>

int main() {
	int X;

	printf("1���� 100������ ���� �Է����ּ��� : ");

	while (scanf_s("%d", &X) != 1 || X < 1 || X>100) {
		printf("�ٽ� �Է��� �ּ��� : ");
		scanf_s("%*[^\n]");
	}

	for (X = X; X >= 1; X--) {
		printf("ī��Ʈ�ٿ� %d\n", X);
	}
	
	return 0;
}