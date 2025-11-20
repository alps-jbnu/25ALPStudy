#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define M 51

int A[M];
int B[M];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, S = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i < n; i++)
		cin >> B[i];
	sort(A, A + n);
	sort(B, B + n);
	int k = 0;
	while (k < n) {
		S += B[n - 1 - k] * A[k];
		k++;
	}
	cout << S;
	return 0;
}