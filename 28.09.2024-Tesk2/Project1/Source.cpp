#include<iostream>

int main(int argc, char* argv[])
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;

	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	scanf_s("%d", &x2);
	scanf_s("%d", &y2);

	if (abs(x1 - x2) == abs(y1 - y2))
	{
		printf("YES");
	}
	else if (abs(x1 == x2))
	{
		printf("YES");
	}
	else if (abs(y1 == y2))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return EXIT_SUCCESS;
}