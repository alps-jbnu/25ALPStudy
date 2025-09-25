#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    set<int> s1;
    set<int> s2;

    for (int i = 0; i < a; i++)
    {
        int e;
        cin >> e;
        s1.insert(e);
    }
    for (int i = 0; i < b; i++)
    {
        int e;
        cin >> e;
        s2.insert(e);
    }
    vector<int> result;

    for (int e1 : s1)
    {
        if (s2.count(e1) == 0)
            result.push_back(e1);
    }

    if (result.empty())
    {
        cout << "0\n";
        return 0;
    }
    else
    {
        cout << result.size() << "\n";
        for (int r : result)
            cout << r << " ";
        return 0;
    }
}
