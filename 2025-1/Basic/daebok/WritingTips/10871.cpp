#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::vector<int> vec;
	int N, X, val;
	std::cin >> N >> X;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> val;
		if (X > val)
			vec.push_back(val);
	}
	std::vector<int>::iterator iter;
	for (iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << " ";
	}

	return 0;
}


