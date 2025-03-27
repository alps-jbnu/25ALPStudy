#include <bits/stdc++.h>
using namespace std;

int arr1[500001];
int arr2[500001];
int ans[500000];
vector<int> v;

int main() {
	int A, B;
	cin >> A >> B;
	int cnt = 0;
	for (int i = 0; i < A; i++) {
		cin >> arr1[i];
		v.push_back(arr1[i]);
	}
	for (int i = 0; i < B; i++) {
		cin >> arr2[i];
		v.push_back(arr2[i]);
	}
	sort(v.begin(), v.end());
	sort(arr1, arr1 + A);
	for (int i = 0; i < A; i++) {
		if (upper_bound(v.begin(), v.end(), arr1[i]) - lower_bound(v.begin(), v.end(), arr1[i]) > 1) 
			continue;
		else {
			ans[cnt++] = arr1[i];
		}
	}
	cout << cnt << "\n";
	for (int i = 0; i < cnt; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}