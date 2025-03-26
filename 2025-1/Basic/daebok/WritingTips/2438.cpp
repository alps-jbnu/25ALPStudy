#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <assert.h>

int main()
{
    int n;
    std::cin >> n;
    assert(n >= 1 && n <= 100);
    for (int i = 1; i < n + 1; ++i)
    {
        for (int j = 0; j < i; ++j)
            std::cout << "*";
        std::cout << "\n";
    }
    return 0;
}