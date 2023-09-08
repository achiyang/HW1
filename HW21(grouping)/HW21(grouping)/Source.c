#include <stdio.h>

int main() {
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	switch (num1) {
	case 4:
	case 6:
	case 9:
		switch (num2) {
		case 6:
		case 9:
		case 11:
			printf("YES\n");
			break;
		default:
			printf("NO\n");
		}
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
		switch (num2) {
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("YES\n");
			break;
		default:
			printf("NO\n");
		}
		break;
	default:
		printf("NO\n");
	}
	return 0;
}
