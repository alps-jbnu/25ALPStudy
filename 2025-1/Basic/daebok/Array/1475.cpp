#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string str;
    int count[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    std::cin >> str;
    std::string::iterator iter;
    for (iter = str.begin(); iter != str.end(); ++iter)
    {
        ++count[*iter - '0'];
    }
    count[6] += count[9];
    count[6] += count[6] % 2;
    count[6] /= 2;
    
    int max = 0;
    for (int i = 0; i < 9; ++i)
    {
        if (max < count[i])
        {
            max = count[i];
        }
    }
    std::cout << max;
    return 0;
}