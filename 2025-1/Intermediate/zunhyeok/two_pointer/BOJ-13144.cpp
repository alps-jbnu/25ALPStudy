#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int int_check[100001];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int st = 0, en = 0;
	long long cnt = 0;
	while (en < n) {
		if (!int_check[arr[en]]) {
			int_check[arr[en++]]++;
			cnt += en - st;
			//cout << "���� cnt: " << cnt << "\n";
		}
		else {
			int_check[arr[st]]--;
			st++;
			//cout << "�ߺ� ���� st����\n";
		}
	}
	cout << cnt;
	return 0;
}