#include <iostream>
using namespace std;

int N, M;
int arr[8] = { 0, };

void backtrack(int depth)
{
	if (depth == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		arr[depth] = i;
		backtrack(depth + 1);
	}

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	backtrack(0);

	return 0;
}
