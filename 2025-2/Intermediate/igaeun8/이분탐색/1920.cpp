// 백준 1920번: 수찾기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using namespace std;

int a[100005];
int n;

int binary_search(int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == target) return 1;
        else if (a[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return 0;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    sort(a, a + n);
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        cout << binary_search(t) << '\n';
    }
}
