#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::string str;
    std::vector<int> vec(26, 0);
    int n;
    bool key = true;
    std::string::iterator siter;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> str;
        for (siter = str.begin(); siter != str.end(); ++siter)
        {
            ++vec[*siter - 'a'];
        }
        std::cin >> str;
        for (siter = str.begin(); siter != str.end(); ++siter)
        {
            --vec[*siter - 'a'];
        }
        for (int j = 0; j < 26; ++j)
        {
            if (vec[j])
            {
                key = false;
            }
            vec[j] = 0;
        }
        if (key)
            std::cout << "Possible" << "\n";
        else
            std::cout << "Impossible" << "\n";
        key = true;
    }
    return 0;
}