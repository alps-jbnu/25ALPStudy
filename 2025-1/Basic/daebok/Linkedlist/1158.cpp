#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <list>



int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, k;
	std::cin >> n >> k;
	std::list<int> l;
	for (int i = 1; i <= n; ++i)
	{
		l.push_back(i);
	}
	std::list<int>::iterator iter = l.begin();
	std::cout << '<';
	while (l.size())
	{

		for (int i = 0; i < k - 1; ++i)
		{
			if (iter == l.end())
			{
				iter = l.begin();
			}
			++iter;
			if (iter == l.end())
			{
				iter = l.begin();
			}
			
		}

		if (l.size() == 1)
		{
			std::cout << *iter << '>';
			l.erase(iter);
		}
		else
		{
			std::cout << *iter << ", ";
			iter = l.erase(iter);
		}
		

	}
	return 0;
}
