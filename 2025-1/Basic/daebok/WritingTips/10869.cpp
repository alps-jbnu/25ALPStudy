#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <assert.h>
int main()
{
    int a, b;
    std::cin >> a >> b;
    assert(a > 1 || b > 10000 || b < 0);
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    std::cout << a % b << std::endl;

    return 0;
}