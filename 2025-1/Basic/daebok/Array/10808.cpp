#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	std::vector<int> vec(26, 0);
	std::string str;
	std::cin >> str;
	std::string::iterator iter;
	for (iter = str.begin(); iter != str.end(); ++iter)
	{
		++vec[*iter - 'a'];
	}
	std::vector<int>::iterator viter;
	for (viter = vec.begin(); viter != vec.end(); ++viter)
	{
		std::cout << *viter << ' ';
	}
}