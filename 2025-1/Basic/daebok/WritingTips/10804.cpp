#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>



int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::vector<int> vec;
	std::vector<int> vec2;
	vec.push_back(0);
	for (int i = 1; i <= 20; ++i)
		vec.push_back(i);
	int a, b;
	for (int i = 0; i < 10; ++i)
	{
		vec2.push_back(0);
		std::cin >> a >> b;
		for (int j = a; j <= b; ++j)
		{
			vec2.push_back(vec[j]);
		}
		for (int j = 0; j < 1 + b - a; ++j)
		{
			vec[j + a] = vec2[1 + b-a - j];
		}
		vec2.clear();
	}
	std::vector<int>::iterator iter;
	for (iter = vec.begin() + 1; iter != vec.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	return 0;
}

