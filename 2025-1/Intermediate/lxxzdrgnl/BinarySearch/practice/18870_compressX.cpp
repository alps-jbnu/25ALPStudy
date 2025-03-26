#include <bits/stdc++.h>
using namespace std;

int x[1000000];
vector<int> uni;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i];
        uni.push_back(x[i]);
    }

    sort(uni.begin(), uni.end());
    uni.erase(unique(uni.begin(), uni.end()), uni.end());  // 중복 제거 후 쓰레기 값 제거

    for (int i = 0; i < N; i++)
        cout << lower_bound(uni.begin(), uni.end(), x[i]) - uni.begin() << ' ';
}