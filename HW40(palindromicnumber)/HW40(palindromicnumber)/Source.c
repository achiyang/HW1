#include <stdio.h>

int main() {
    int num, original, digit = 0;

    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit++;
        num /= 10;
    }

    for (int i = 0; i < (digit >> 1); i++) {
        int last_digit = original % 10;
        original /= 10;
        num = (num << 1) + (num << 3) + last_digit; // (num * 10) + last_digit
    }

    if (digit & 1) {
        original /= 10;
    }

    if (original == num) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}