#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::vector<int> vec;
	int val;
	int sum = 0;
	for (int i = 0; i < 9; ++i)
	{
		std::cin >> val;
		vec.push_back(val);
		sum += val;
	}
	std::sort(vec.begin(), vec.end());
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 1 + i; j < 9; ++j)
		{
			if (100 == sum - (vec[i] + vec[j]))
			{
				vec.erase(vec.begin() + j);
				vec.erase(vec.begin() + i);
				j = 8;
				i = 8;
				
			}
		}
	}
	for (int i = 0; i < 7; ++i)
	{
		std::cout << vec[i] << "\n";
	}
	return 0;
}


