#include <stdio.h>
#include <string.h>

int main() {
	char s[101], t[101], temp;
	int len, i, j, sort;

	scanf("%s %s", s, t);

	len = strlen(s);

	for (i = 0; i < len - 1; i++) {
		sort = i;
		for (j = i + 1; j < len; j++) {
			if (s[sort] > s[j]) {
				sort = j;
			}
		}
		temp = s[i];
		s[i] = s[sort];
		s[sort] = temp;
	}

	len = strlen(t);

	for (i = 0; i < len - 1; i++) {
		sort = i;
		for (j = i + 1; j < len; j++) {
			if (t[sort] < t[j]) {
				sort = j;
			}
		}
		temp = t[i];
		t[i] = t[sort];
		t[sort] = temp;
	}

	if (strcmp(s, t) < 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}