#include<iostream>

int main(int argc, char* argv[])
{
	int g = 0;
	int l = 0;
	scanf_s("%d", &g);
	scanf_s("%d", &l);
	int n = g + l - 1;
	int a = n - g;
	int b = n - l;
	printf("%d %d", a, b);
	return EXIT_SUCCESS;
}