#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int arr[9] = {};
    int max = 0;
    int num = 0;
    for (int i = 0; i < 9; ++i)
    {
        std::cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            num = i + 1;
        }
    }
    std::cout << max << "\n" << num;
    return 0;
}
