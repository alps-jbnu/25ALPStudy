// 백준 1654번 : 랜선 자르기
// https://www.acmicpc.net/problem/1654

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
int k, n;
int arr[10005];

bool solve(ll mid) {
    ll cur = 0;
    for (int i = 0; i < k; i++) {
        cur += arr[i] / mid;
    }
    return cur >= n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> n;

    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }
    ll st = 1, en = 0x7fffffff;

    while (st < en) {
        ll mid = (st + en + 1) / 2;
        if (solve(mid))
            st = mid;
        else
            en = mid - 1;
    }
    cout << st;
}
// k개의 랜선을 길이 mid로 잘랐을 때, n개 이상이 되는지 확인하는 함수 solve(mid)를 작성한다.
// 이분 탐색을 활용하여 최적의 해를 빠르게 찾는 문제 풀이 방법
