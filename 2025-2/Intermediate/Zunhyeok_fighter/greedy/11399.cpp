#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define M 1001

int P[M];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> P[i];
	sort(P, P + n);
	int k = 0;
	int cur_t = 0;
	for (int i = 0; i < n; i++) {
		cur_t += P[i];
		sum += cur_t;
	}
	cout << sum;
	return 0;
}