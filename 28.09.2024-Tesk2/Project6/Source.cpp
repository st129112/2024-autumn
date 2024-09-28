#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
    double a = 0;
    double b = 0;
    double c = 0;

    double x1 = 0;
    double x2 = 0;
    double d = 0;
    cin >> a >> b >> c;
    if (!a && !b && !c)
    {
        printf("%d", -1);
        return EXIT_SUCCESS;
    }
    if (a)
    {
        d = b * b - 4.0 * a * c;
        if (d > 0)
        {
            cout << 2 << endl;
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            if (x1)
                cout << fixed << x1;
            else
                cout << fixed << 0;
            cout << endl;
            if (x2)
                cout << fixed << x2;
            else
                cout << fixed << 0;
        }
        else
            if (!d)
            {
                cout << 1 << endl;
                x1 = -b / (2 * a);
                if (x1)
                    cout << fixed << x1;
                else
                    cout << fixed << 0;
            }
            else
                if (d < 0)
                {
                    printf("%d", 0);
                }
    }
    else
        if (b)
        {
            cout << 1 << endl;
            if (c)
                x1 = -c / b;
            else
                x1 = 0;
            cout << fixed << x1;
        }
        else
            if (c)
            {
                printf("%d", 0);
            }
    return EXIT_SUCCESS;
}