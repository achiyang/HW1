#include <stdio.h>
#include <stdbool.h>

int ismonth(const char *str);

int main() {
	char date[5];

	scanf("%s", date);

	switch (ismonth(date)) {
	case true:
		switch (ismonth(&date[2])) {
		case true:
			printf("AMBIGUOUS");
			break;

		case false:
			printf("MMYY");
			break;
		}
		break;

	case false:
		switch (ismonth(&date[2])) {
		case true:
			printf("YYMM");
			break;

		case false:
			printf("NA");
			break;
		}
		break;
	}

	return 0;
}

int ismonth(const char* str) {
	if (str[0] == '0') {
		if (str[1] != '0') {
			return true;
		}
	}
	else if (str[0] == '1') {
		if (str[1] <= '2') {
			return true;
		}
	}
	return false;
}