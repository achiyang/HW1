#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int current_time, remaining_time, test_time;

	scanf("%d %d", &current_time, &remaining_time);

	test_time = current_time + remaining_time;

	if (test_time / 24 != 0) {
		test_time %= 24;
	}
	printf("%d", test_time);

	return 0;
}