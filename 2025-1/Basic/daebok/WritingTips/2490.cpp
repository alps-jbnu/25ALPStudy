#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>


int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int val;
	int count = 0;
	char result;
	
	for (int i = 0;i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			std::cin >> val;
			if (0 == val)
			{
				++count;
			}

		}
		switch (count)
		{
		case 0:
			result = 'E';
			break;
		case 1:
			result = 'A';
			break;
		case 2:
			result = 'B';
			break;
		case 3:
			result = 'C';
			break;
		case 4:
			result = 'D';
			break;

		}
		std::cout << result << "\n";
		count = 0;
	}
	return 0;
}


