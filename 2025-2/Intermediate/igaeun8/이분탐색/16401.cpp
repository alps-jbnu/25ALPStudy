// 백준 16401번 : 과자 나눠주기
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int m, n, input;
vector<int> snacks;

// mid 길이로 나눌 수 있는지 여부 확인 함수
bool canDivide(ll mid) {
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += snacks[i] / mid; // mid 길이로 잘랐을 때 개수 계산
    }
    return cnt >= m; // m명 이상 나눠줄 수 있으면 true
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        snacks.push_back(input);
    }

    sort(snacks.begin(), snacks.end()); 

    ll st = 1;
    ll en = snacks.back(); // 최대 길이
    ll result = 0;

    // 주어진 길이 mid로 과자를 잘랐을 때, m명 이상 나눠줄 수 있는지 여부를 판단
    while (st <= en) {
        ll mid = (st + en) / 2;
        if (canDivide(mid)) {
            result = mid;    // 조건 만족 → 길이 저장
            st = mid + 1;    // 더 긴 길이 시도 
        } 
        else                 // 조건 불만족
            en = mid - 1;    // 더 작은 값 시도
    }
    cout << result; 
    return 0;
}

