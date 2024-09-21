#include <iostream>

int main()
{
    int h = 0;
    int a = 0;
    int b = 0;
    scanf_s("%d", &h);
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    int c = (h - b + (a - b) - 1) / (a - b);
    printf("%d", c);
    return EXIT_SUCCESS;
}