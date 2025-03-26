#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <list>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int cursor;
    char c;
    std::string str;
    std::cin >> str;
    std::string::iterator siter;
    std::list<char> l;
    for (siter = str.begin(); siter != str.end(); ++siter)
    {
        l.push_back(*siter);
    }
    std::list<char>::iterator liter = l.end();
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> c;
        switch (c)
        {
        case'L':
            if (liter != l.begin())
            {
                --liter;
            }
            break;
        case'D':
            if (liter != l.end())
            {
                ++liter;
            }
            break;
        case'B':
            if (liter != l.begin())
            {
                --liter;
                liter = l.erase(liter);
            }
            break;
        case'P':
            std::cin >> c;
            l.insert(liter, c);
            break;

        default:
            break;
        }
    }
    for (liter = l.begin(); liter != l.end(); ++liter)
    {
        std::cout << *liter;
    }
    
    
    return 0;
}