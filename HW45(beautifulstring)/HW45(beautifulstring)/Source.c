#include <stdio.h>

int main() {
	char w[11];
	int len = 0;

	scanf("%s", w);

	while (w[len] != '\0') {
		len++;
	}

	if (len & 1) {
		printf("NO");
	}
	else {
		printf("YES");
	}

	return 0;
}