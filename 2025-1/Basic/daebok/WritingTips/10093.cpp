#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	long long A, B;
	std::cin >> A >> B;

	if (A > B)
	{
		long long C = A;
		A = B;
		B = C;

	}
	if (A == B)
	{
		std::cout << 0;
	}
	else
	{
		std::cout << B - A - 1<< "\n";
	}
	for (A+1; A+1 < B; ++A)
	{
		std::cout << A+1 << " ";
	}

	return 0;
}


