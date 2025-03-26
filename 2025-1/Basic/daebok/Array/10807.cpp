#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, val;
    std::cin >> n;

    int arr[201] = {};
    for (int i = 0; i < n; ++i)
    {
        std::cin >> val;
        ++arr[val+100];
    }
    int v;
    std::cin >> v;
    std::cout << arr[v + 100];
    return 0;
}