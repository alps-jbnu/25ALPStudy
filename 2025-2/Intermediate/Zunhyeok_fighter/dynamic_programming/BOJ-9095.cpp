#include <iostream>
using namespace std;

int fact(int x) {
	int a1 = 1;
	for (int k = 1; k <= x; k++) {
		a1 *= k;
	}
	return a1;
}

int main() {
	int T, n, sue = 0, a, b, c;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		for (a = 0;;a++) {
			for (b = 0;;b++) {
				if (2 * b + 3 * a > n) {
					break;
				}
				c = n - 2 * b - 3 * a;
				sue += fact(n - 2 * a - b) / (fact(a) * fact(b) * fact(c));
			}
			if (3 * a > n)
				break;
		}
		cout << sue << endl;
		sue = 0;
	}
	return 0;
}
