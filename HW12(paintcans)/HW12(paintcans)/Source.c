#include <stdio.h>

int main()
{
	int a, b, c;
	int i = 3;	//처음에는 모든 수가 서로 다르다고 가정합니다.

	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b)
	{
		i--;
		if (b == c) {
			i--;
		}
	}
	else if (b == c || a == c)
	{
		i--;
	}

	printf("%d", i);
	return 0;
}