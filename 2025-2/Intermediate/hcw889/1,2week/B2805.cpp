#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> tree(n);
    long long max = 0;
    long long min = 0;
    long long answer = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> tree[i];
        if (tree[i] >= max)
            max = tree[i];
    }

    while (max >= min)
    {
        long long mid = (max + min) / 2;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (tree[i] - mid > 0)
                sum += (tree[i] - mid);
        }

        if (sum >= m)
        {
            answer = mid;
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
    }

    cout << answer << "\n";

    return 0;
}
