#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, d, k, c;
    // n: 접시 수 , d : 초밥 가짓수 , k : 연속해서 먹는 접시수, c : 쿠폰번호
    cin >> n >> d >> k >> c;

    vector<int> belt(n);
    for (int i = 0; i < n; i++)
    {
        cin >> belt[i];
    }

    vector<int> freq(d + 1, 0);
    int kind = 0;
    for (int i = 0; i < k; i++)
    {
        if (++freq[belt[i]] == 1)
            kind++;
    }

    int answer = kind + (freq[c] == 0 ? 1 : 0);

    for (int i = 1; i < n; i++)
    {
        if (--freq[belt[i - 1]] == 0)
            kind--;
        int in = belt[(i + k - 1) % n];
        if (++freq[in] == 1)
            kind++;
        answer = max(answer, kind + (freq[c] == 0 ? 1 : 0));
    }

    cout << answer << "\n";

    return 0;
}
