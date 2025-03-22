#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	int M;
	cin >> M;

	list<char> l;
	auto cursor = l.begin();
	for (int i = 0; i < str.length(); i++)
	{
		cursor = l.insert(cursor, str[i]);
		cursor++;
	}

	for (int i = 0; i < M; i++)
	{
		char command;
		cin >> command;

		if (command == 'L')
		{
			if (cursor != l.begin())
			{
				cursor--;
			}
		}
		else if (command == 'D')
		{
			if (cursor != l.end())
			{
				cursor++;
			}
		}
		else if (command == 'B')
		{
			if (cursor != l.begin())
			{
				cursor = l.erase(--cursor);
			}
		}
		else if(command == 'P')
		{
			char x;
			cin >> x;

			l.insert(cursor, x);
		}
	}

	for (auto i : l)
	{
		cout << i;
	}
	cout << "\n";

	return 0;
}
