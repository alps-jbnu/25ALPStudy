#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::vector<int> vec;
	int val;
	for (int i = 0; i < 3; ++i)
	{
		std::cin >> val;
		if (i == 0)
			vec.push_back(val);
		else if (i == 1)
		{
			if (val >= vec[0])
				vec.push_back(val);
			else
			{
				vec.insert(vec.begin(), val);
			}
		}
		else
		{
			if (val >= vec[0])
				if (val >= vec[1])
				{
					vec.push_back(val);
				}
				else
				{
					vec.insert(vec.begin() + 1, val);
				}
			else
			{
				vec.insert(vec.begin(), val);
			}
		}
			
	}
	for (int i = 0; i < 3; ++i)
	{
		std::cout << vec[i] << " ";
	}
	return 0;
}


