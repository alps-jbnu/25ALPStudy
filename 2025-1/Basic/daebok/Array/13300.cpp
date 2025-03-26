#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int arr[12] = {};
    int n, k;
    int s, y;
    int count = 0;
    std::cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> s >> y;
        ++arr[s + 2 * (y - 1)];
    }
    for (int i = 0; i < 12; ++i)
    {
        count += arr[i] / k;
        if (arr[i] % k)
            ++count;
    }
    std::cout << count;
    return 0;
}