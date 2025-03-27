#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll hus[200001];
int N, C;

int get_num(ll dist) {
    int cnt = 1, a = 0;
    if (N == 2) return 2;
    for (int i = 1; i < N; i++) {
        if (hus[i] - hus[a] >= dist) {
            a = i;
            cnt++;
        }
    }
    //cout << " dist:" << dist << " cnt:" << cnt <<" ";
    return cnt;
}

int main() {
    cin >> N >> C;
    for (int i = 0; i < N; i++) {
        cin >> hus[i];
    }
    sort(hus, hus + N);
    ll min_dist = 1;
    ll st = 0, en = hus[N - 1] - hus[0];
    while (st <= en) {
        ll mid = (st + en) / 2;
        if (get_num(mid) < C)
            en = mid - 1;
        else {
            min_dist = max(min_dist, mid);
            st = mid + 1;
        }
    }
    cout << min_dist;

    return 0;
}