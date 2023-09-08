#include <stdio.h>
#include <string.h>

int main() {
	char s[21];

	scanf("%s", s);

	s[strcspn(s, "Z") + 1] = '\0';

	printf("%s", s + strcspn(s, "A"));

	return 0;
}