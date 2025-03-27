#include <bits/stdc++.h>
using namespace std;

int len_snack[1000001];

int get_num_of_snack(int len, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += len_snack[i] / len;
	}
	return sum;
}

int main() {
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		cin >> len_snack[i];
	}
	sort(len_snack, len_snack + n);
	int st = 1, en = len_snack[n - 1];
	while (st <= en) {
		int mid = (st + en) / 2;
		if (get_num_of_snack(mid, n) >= m)
			st = mid + 1;
		else
			en = mid - 1;
	}
	cout << st - 1;
	return 0;
}