#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N;
	std::cin >> N;
	for (int i = 1; i <= N - 1; ++i)
	{
		for (int j = N - i; j > 0; --j)
		{
			std::cout << " ";
		}
		for (int j = 1; j < 2 * i; ++j)
		{
			std::cout << "*";
		}
		std::cout << "\n";

	}
	for (int i = 0; i < (2 * N) - 1; ++i)
	{
		std::cout << "*";

	}
	std::cout << "\n";
	for (int i = 1; i <= N - 1; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			std::cout << " ";
		}
		for (int j = 1; j < (2 * N) - (2 * i);++j)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	return 0;
}

