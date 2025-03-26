#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::vector<int> vec(26, 0);
    std::string str;
    std::cin >> str;
    std::string::iterator iter;
    int count = 0;
    for (iter = str.begin(); iter != str.end(); ++iter)
    {
        ++vec[*iter - 'a'];
    }
    std::cin >> str;
    for (iter = str.begin(); iter != str.end(); ++iter)
    {
        --vec[*iter - 'a'];
    }
    for (int i = 0; i < 26; ++i)
    {
        if (vec[i])
        {
            count += std::abs(vec[i]);
        }
    }
    std::cout << count;
    return 0;
}