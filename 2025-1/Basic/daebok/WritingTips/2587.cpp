#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int a[5];
	int sum = 0;
	for (int i = 0; i < 5; ++i)
	{
		std::cin >> a[i];
		sum += a[i];
	}
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 1+i; j < 5 ; ++j)
		{
			if (a[i] > a[j])
			{
				int b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
	
	std::cout << sum / 5 << "\n" << a[2];
	return 0;
}


