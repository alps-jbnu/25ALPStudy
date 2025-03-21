#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k, grade, gender, result = 0;

	int c[6][2] = { 0 };

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> gender >> grade;
		c[grade - 1][gender]++;
	}

	for (int i = 0; i < 12; i++) {
		if (c[i / 2][i % 2] == 0) continue;
		if (c[i / 2][i % 2] % k == 0) {
			result += c[i / 2][i % 2] / k;
		}
		else {
			result += c[i / 2][i % 2] / k + 1;
		}
	}

	printf("%d", result);

	return 0;
}
