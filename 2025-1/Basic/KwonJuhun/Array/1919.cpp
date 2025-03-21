#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string a, b;

	cin >> a >> b;

	int a_w[26] = { 0 };
	int b_w[26] = { 0 };

	int result = 0;

	for (int i = 0; i < a.size(); i++) {
		a_w[a[i] - 97]++;
	}

	for (int i = 0; i < b.size(); i++) {
		b_w[b[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		result += abs(a_w[i] - b_w[i]);
	}

	printf("%d", result);

	return 0;
}
