#include <stdio.h>
#include <string.h>

int verification(char* str, int start, int end) {
	if (start == end) {
		return 1;
	}
	else {
		if (strncmp(str + start, "dream", 5) == 0) {
			if (strncmp(str + start, "dreamer", 7) == 0) {
				if (verification(str, start + 7, end)) {
					return 1;
				}
				return verification(str, start + 5, end);
			}
		}
		else if (strncmp(str + start, "erase", 5) == 0) {
			if (strncmp(str + start, "eraser", 6) == 0) {
				if (verification(str, start + 6, end)) {
					return 1;
				}
				return verification(str, start + 5, end);
			}
		}
		else {
			return 0;
		}
	}
}

int main() {
	char S[101];
	int len;

	scanf("%s", S);

	len = strlen(S);

	if (verification(S, 0, len)) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}