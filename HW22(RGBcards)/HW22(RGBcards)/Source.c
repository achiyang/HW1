#include <stdio.h>

int main() {
	int tens, units;

	scanf("%*d %d %d", &tens, &units);
	scanf("%*[^\n]");
	if ((tens * 10 + units) % 4 == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	return 0;
}