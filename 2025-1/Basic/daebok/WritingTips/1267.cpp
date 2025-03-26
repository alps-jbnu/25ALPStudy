#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>



int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, time;

	std::cin >> N;
	int y, m;
	int Y = 0;
	int M = 0;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> time;
		y = 1 + (time / 30);
		m = 1 + (time / 60);

		Y += y * 10;
		M += m * 15;
	}


	if (Y < M)
	{
		std::cout << "Y " << Y;
	}
	else if (Y == M)
	{
		std::cout << "Y M " << Y;
	}
	else
	{
		std::cout << "M " << M;
	}
	return 0;
}

