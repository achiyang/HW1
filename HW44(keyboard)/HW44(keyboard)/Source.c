#include <stdio.h>

int main() {
	char s[11];
	int len = 0, i;

	scanf("%s", s);

	while (s[len] != '\0') {
		len++;
	}

	for (i = 0; i < len; i++) {
		switch (s[i]) {
		case '0':
			printf("0");
			break;
		case '1':
			printf("1");
			break;
		case 'B':
			printf("\b \b");
			break;
		}
	}

	return 0;
}