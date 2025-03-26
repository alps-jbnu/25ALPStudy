#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <assert.h>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            std::cout << " ";
        }
        for (int p = 0; p < i + 1; ++p)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}