#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::vector<bool> arr(1000001, 0);
    int n, val, x;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> val;
        arr[val] = 1;
    }
    std::cin >> x;
    int count = 0;
    for (int i = 1; i < x-i; ++i)
    {
        if (arr[i] && arr[x - i])
            ++count;
    }
    std::cout << count;
    return 0;
}