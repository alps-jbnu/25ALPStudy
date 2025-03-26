#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    int b = 0;

    if ((0 != a % 100 || 0 == a % 400) && 0 == a % 4)
        b = 1;
    std::cout << b;

    return 0;
}