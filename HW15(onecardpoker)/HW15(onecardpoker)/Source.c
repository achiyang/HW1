#include <stdio.h>

int main() {
    int A, B;
    char* winner;

    do {
        printf("1에서 13 사이의 정수를 두 개 입력해 주세요 : ");
        scanf_s("%d %d", &A, &B);
        while (getchar() != '\n'); // 버퍼 비우기
    } while (A < 1 || B < 1 || A > 13 || B > 13);

    if (A < B) {
        winner = "은정";
    }
    else if (A > B) {
        winner = "상일";
    }
    else {
        winner = "무승부";
    }

    printf("%s\n", winner);

    return 0;
}