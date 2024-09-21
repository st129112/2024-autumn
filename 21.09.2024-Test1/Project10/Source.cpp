#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	scanf_s("%d", &a);
	printf("%d %d %d", a / 6, a / 6 * 4, a / 6);
	return EXIT_SUCCESS;
}