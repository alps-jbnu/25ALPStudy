#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define M 100001

int num[M];
int op[M];
string s;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> s;
	int i = 0, j = 0;
	while (i < s.size()) {
		if (s[i] == '+') {
			string n = s.substr(0, i);
			num[j] = stoi(n);
			op[j] = 1;
			s = s.substr(i + 1);
			i = 0;
			j++;
		}
		else if (s[i] == '-') {
			string n = s.substr(0, i);
			num[j] = stoi(n);
			op[j] = -1;
			s = s.substr(i + 1);
			i = 0;
			j++;
		}
		i++;
	}
	num[j] = stoi(s);
	int m_sum = 0, plag = 0;
	m_sum = num[0];
	for (int i = 0; i < j; i++) {
		if (op[i] == 1 && plag == 1) {
			m_sum -= num[i + 1];
		}
		else if (op[i] == -1 && plag == 0) {
			m_sum -= num[i + 1];
			plag = 1;
		}
		else if (op[i] == 1 && plag == 0) {
			m_sum += num[i + 1];
		}
		else if (op[i] == -1 && plag == 1) {
			m_sum -= num[i + 1];
		}
	}
	cout << m_sum;

	return 0;
}