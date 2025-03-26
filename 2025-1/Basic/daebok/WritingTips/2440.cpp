#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    for (n; n > 0; --n)
    {
        for (int i = n; i > 0; --i)
        {
            std::cout << '*';
        }
        std::cout << "\n";
    }
    return 0;
}