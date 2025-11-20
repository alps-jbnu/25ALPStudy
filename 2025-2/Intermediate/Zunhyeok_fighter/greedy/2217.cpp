#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define M 100001
int arr[M];

bool compare(int a, int b) {
	return a > b;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	int max_w = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n, compare);
	int cur_w = arr[0];
	for (int i = 0; i < n; i++) {
		cur_w = arr[i] * (i + 1);
		max_w = max(max_w, cur_w);
	}
	cout << max_w;
	return 0;
}