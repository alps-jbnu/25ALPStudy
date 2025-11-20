#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define M 1000001

int p[M];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, sum = 0, plag_0 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sort(p, p + n);
	int i = n - 1;
	while (p[i - 1] > 0) {
		if (p[i] == 1 || p[i - 1] == 1) sum += p[i] + p[i - 1];
		else sum += p[i] * p[i - 1];
		i -= 2;
	}
	if (p[i] > 0) {
		sum += p[i];
		if (!p[i - 1]) plag_0 = 1;
	}
	else if (!p[i]) plag_0 = 1;
	i = 0;
	while (p[i + 1] < 0) {
		sum += p[i] * p[i + 1];
		i += 2;
	}
	if (p[i] < 0 && plag_0 == 0) sum += p[i];
	cout << sum;
	return 0;
}