#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    int current_sum = 0;
    int start = 0;

    for (int end = 0; end < n; end++)
    {
        current_sum += a[end];

        while (current_sum >= m)
        {
            if (current_sum == m)
            {
                count++;
            }
            current_sum -= a[start];
            start++;
        }
    }

    cout << count << endl;

    return 0;
}
