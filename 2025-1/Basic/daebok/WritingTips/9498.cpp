#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <assert.h>
int main()
{
    int a = 0;
    std::cin >> a;
    assert(a < 100 || a > 0);
    char b;
    if (a >= 90)
        b = 'A';
    else if (a >= 80)
        b = 'B';
    else if (a >= 70)
        b = 'C';
    else if (a >= 60)
        b = 'D';
    else
        b = 'F';
    std::cout << b;
    return 0;
}