#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <list>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::list<char> l;
    std::string str;
    int n;
    std::cin >> n;
    std::list<char>::iterator liter;
    std::string::iterator siter;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> str;
        liter = l.begin();
        for (siter = str.begin(); siter != str.end(); ++siter)
        {
            
            if (*siter == '<')
            {
                if (liter != l.begin() && l.size())
                {
                    --liter;
                }
           }
            else if (*siter == '>')
            {
                if (liter != l.end() && l.size())
                {
                    ++liter;
                }
            }
            else if (*siter == '-')
            {
                if (liter != l.begin() && l.size())
                {
                    --liter;
                    liter = l.erase(liter);
                }
            }
            else
            {
                liter = l.insert(liter, *siter);
                ++liter;
                
            }
        }

        for (liter = l.begin(); liter != l.end(); ++liter)
        {
            std::cout << *liter;
        }
        std::cout << "\n";
        l.clear();
        
    }

    return 0;
}