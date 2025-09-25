// 백준 1822 - 차집합
// A와 B의 최대 길이가 500,000이기 때문에 완전 탐색으로 하면 O(n^2)이 되어 시간 초과가 발생한다.
// 따라서 이분 탐색을 활용하여 O(n log n)으로 해결할 수 있다.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> A(n), B(m), answer;

    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < m; i++) cin >> B[i];

    // 두 집합 정렬
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    // A의 원소가 B에 없으면 answer에 추가
   for (int i = 0; i < n; i++) {
        if (!binary_search(B.begin(), B.end(), A[i])) {
            answer.push_back(A[i]);
        }
    }

    cout << answer.size() << "\n";
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    return 0;
}
