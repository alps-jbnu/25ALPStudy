#include <bits/stdc++.h>
using namespace std;

int arr[1001];
vector<int> v;

bool binary_search(int st, int en, int target) {
	while (st <= en) {
		int mid = (st + en) / 2;
		if (v[mid] == target) {
			return true;
		}
		else if (v[mid] < target) {
			st = mid + 1;
		}
		else {
			en = mid - 1;
		}
	}
	return false;
}

int main() {
	cin.tie(0); cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n, max_num = INT_MIN;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			v.push_back(arr[i] + arr[j]);
		}
	}
	sort(arr, arr + n);
	sort(v.begin(), v.end());
	for (int i = n-1; i > 0; i--) {
		for (int j = 0 ; j < n; j++) {
			int target = arr[i] - arr[j];
			if (binary_search(v.begin(), v.end(), target)) {
				max_num = max(arr[i], max_num);
			}
		}
	}
	cout << max_num;
	return 0;
}