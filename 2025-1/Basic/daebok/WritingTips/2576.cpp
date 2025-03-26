#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int val;
	int sum = 0;
	int m = 100;
	for (int i = 0; i < 7; ++i)
	{
		std::cin >> val;
		if (val % 2)
		{
			if (m > val)
			{
				m = val;
			}
			sum += val;
		}
	}
	if (sum)
		std::cout << sum << "\n" << m;
	else
		std::cout << -1;
	
	return 0;
}


