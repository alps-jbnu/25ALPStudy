#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    int c = 0;
    for (n; n > 0; --n)
    {
        for (int i = 0; i < c; ++i)
        {
            std::cout << ' ';
        }
        for (int i = n; i > 0; --i)
        {
            std::cout << '*';
        }
        std::cout << "\n";
        ++c;
    }
    return 0;
}