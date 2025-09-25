#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        if (!binary_search(b.begin(), b.end(), a[i]))
        {
            result.push_back(a[i]);
        }
    }

    cout << result.size() << "\n";

    if (!result.empty())
    {
        for (int x : result)
        {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
