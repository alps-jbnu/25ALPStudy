// 백준 2110. 공유기 설치
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, c;
vector<int> houses;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> c;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        houses.push_back(tmp);
    }

    // 1. 주어진 집들의 좌표를 정렬한다.
    sort(houses.begin(), houses.end());

    // 2. 집들 사이의 거리를 초기화한다.
    // 최소 거리 1, 최대 거리 끝집-첫집으로 초기화.
    int start = 1;
    int end = houses[n - 1] - houses[0];
    int result = 0;

    // 3. 집들 사이의 거리를 기준으로 이분 탐색을 진행한다.
    while (start <= end) {
        int mid = (start + end) / 2;

        int cnt = 1;
        int prev_house = houses[0];
        for (int i = 1; i < n; i++) {
            if (houses[i] - prev_house >= mid) {
                cnt++;
                prev_house = houses[i];
            }
        }

        // 4. 3을 만족하는 거리 중 최댓값을 갱신한다.
        if (cnt >= c) {  
            result = max(result, mid);
            start = mid + 1;  // 공유기를 제한 개수 이상 사용했으므로 거리 늘리기
        } else {
            end = mid - 1;    // 공유기를 제한 개수 미만 사용했으므로 거리 줄이기
        }
    }

    cout << result;
    return 0;
}
