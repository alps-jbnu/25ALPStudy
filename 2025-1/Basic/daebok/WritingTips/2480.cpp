#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int a[3];
	int result;
	int val;
	int m = 0;
	for (int i = 0; i < 3; ++i)
	{
		std::cin >> val;
		a[i] = val;
		if (m < val)
			m = val;
	}
	if (a[0] == a[1] && a[1] == a[2])
		result = 10000 + 1000 * a[0];
	else if (a[0] == a[1])
	{
		result = 1000 + 100 * a[0];
	}
	else if (a[1] == a[2])
	{
		result = 1000 + 100 * a[1];
	}
	else if (a[0] == a[2])
	{
		result = 1000 + 100 * a[2];
	}
	else
	{
		result = m * 100;
	}
	std::cout << result;
	return 0;
}


