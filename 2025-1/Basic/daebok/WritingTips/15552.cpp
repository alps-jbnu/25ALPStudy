#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <assert.h>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int T;
    int a, b;
    std::cin >> T;
    for (int i = 0; i < T; ++i)
    {
        std::cin >> a >> b;
        std::cout << a + b << "\n";
    }
    return 0;
}
