#include <stdio.h>

int main() {
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b + c || b == a + c || c == a + b) {
		printf("��\n");
	}
	else {
		printf("�ƴϿ�\n");
	}
	return 0;
}