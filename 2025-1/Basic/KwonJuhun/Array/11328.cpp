#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		string text;
		cin >> text;

		int w[27] = { 0 };

		for (int i = 0; i < text.size(); i++) {
			w[text[i] - 97]++;
		}

		string target;
		cin >> target;
		
		bool a = true;

		for (int i = 0; i < target.size(); i++) {
			if (text.size() != target.size()) {
				printf("Impossible\n");
				a = false;
				break;
			}

			w[target[i] - 97]--;
			if (w[target[i] - 97] < 0) {
				printf("Impossible\n");
				a = false;
				break;
			}
		}
		
		if (a == true) {
			printf("Possible\n");
		}
	}

	return 0;
}
