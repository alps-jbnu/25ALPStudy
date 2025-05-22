#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<pair<int, int>> XY(n);
    for (int i = 0; i < n; i++) {
        cin >> XY[i].first >> XY[i].second;
    }

    sort(XY.begin(), XY.end());

    int total = 0;
    int start = XY[0].first;  // 전체 X
    int end = XY[0].second;

    for (int i = 1; i < n; i++) {
        int x = XY[i].first;  // 임시 X
        int y = XY[i].second;

        if (x <= end) {
            end = max(end, y);
        } else {  // 겹치지 않는 경우
            total += (end - start);
            start = x;
            end = y;
        }
    }

    total += (end - start);

    cout << total;
}
