#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <assert.h>
#include <string>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a, b, c;
    std::cin >> a >> b >> c;
   
    std::string result = std::to_string(a * b * c);
    std::string::iterator iter;
    for (int i = 0; i < 10; ++i)
    {
        int j = 0;
        for (iter = result.begin(); iter != result.end(); ++iter)
        {
            if (*iter == (i + '0'))
            {
                ++j;
            }

        }
        std::cout << j << "\n";
    }




    return 0;
}