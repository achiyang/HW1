#include <stdio.h>

int main() {
    int A, B;
    char* winner;

    do {
        printf("1���� 13 ������ ������ �� �� �Է��� �ּ��� : ");
        scanf_s("%d %d", &A, &B);
        while (getchar() != '\n'); // ���� ����
    } while (A < 1 || B < 1 || A > 13 || B > 13);

    if (A < B) {
        winner = "����";
    }
    else if (A > B) {
        winner = "����";
    }
    else {
        winner = "���º�";
    }

    printf("%s\n", winner);

    return 0;
}