#include <iostream>
using namespace std;

int xi[1000001];

int min(int a, int b)
{
	return a < b ? a : b;
}

int main() {
	int x;
	xi[0] = xi[1] = 0;
	cin >> x;
	for (int i = 2; i <= x; i++) {
		xi[i] = xi[i - 1] + 1;
		if (i % 2 == 0) {
			xi[i] = min(xi[i], xi[i / 2] + 1);
		}
		if (i % 3 == 0) {
			xi[i] = min(xi[i], xi[i / 3] + 1);
		}
	}
	cout << xi[x];
}