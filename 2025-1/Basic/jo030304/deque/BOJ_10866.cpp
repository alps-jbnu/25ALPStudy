#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	deque<int> dq;
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (str == "push_front")
		{
			int num;
			cin >> num;

			dq.push_front(num);
		}
		else if (str == "push_back")
		{
			int num;
			cin >> num;

			dq.push_back(num);
		}
		else if (str == "pop_front")
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (str == "pop_back")
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (str == "size")
		{
			if (dq.empty())
			{
				cout << 0 << "\n";
			}
			else
			{
				cout << dq.size() << "\n";
			}
		}
		else if (str == "empty")
		{
			if (dq.empty())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (str == "front")
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << dq.front() << "\n";
			}
		}
		else
		{
			if (dq.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << dq.back() << "\n";
			}
		}
	}

	return 0;
}
