#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> a(N);
    int max_val = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
        if (a[i] > max_val) max_val = a[i];
    }

    // 값 범위에 맞춰 빈도 배열 크기 설정
    vector<int> cnt(max_val + 1, 0);

    int ans = 0;
    int l = 0;
    for (int r = 0; r < N; ++r)
    {
        cnt[a[r]]++;
        // a[r]의 빈도가 K를 초과하면 왼쪽을 줄여서 조건 회복
        while (cnt[a[r]] > K)
        {
            cnt[a[l]]--;
            l++;
        }
        ans = max(ans, r - l + 1);
    }

    cout << ans << "\n";
    return 0;
}
