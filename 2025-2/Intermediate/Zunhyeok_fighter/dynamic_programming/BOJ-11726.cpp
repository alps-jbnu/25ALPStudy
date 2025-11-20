#include <iostream>
using namespace std;

int long long dpi[1000] = { 0, };

int main() {
	int n;
	cin >> n;
	dpi[1] = 1;
	dpi[2] = 2;
	for (int i = 3; i <= n; i++) {
		dpi[i] = (dpi[i - 1] + dpi[i - 2]) % 10007;
	}
	cout << dpi[n];
	return 0;
}