#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[4][4001];
ll sum1[16000000], sum2[16000000];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[j][i];
		}
	}
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum1[k] = arr[0][i] + arr[1][j];
			sum2[k] = arr[2][i] + arr[3][j];
			k++;
		}
	}
	sort(sum2, sum2 + k);
	ll cnt = 0; //�ִ� ���ü��ִ°�... 4000^4����.
	for (int i = 0; i < k; i++) {
		int st = 0, en = k - 1;
		while (st <= en) {
			int mid = (st + en) / 2;
			if (sum2[mid] + sum1[i] == 0) {
				cnt += upper_bound(sum2, sum2 + k, sum2[mid]) - lower_bound(sum2, sum2 + k, sum2[mid]);
					if (sum2[mid] + sum1[i] <= 0) {
						st = upper_bound(sum2, sum2 + k, sum2[mid]) - sum2; //upper�� lower�� �迭 ��ġ(�ּ�) ��ȯ�ؼ� ��Ʈ�� ��ȯ�ϱ� ���� sum2�� ù��° �ּҸ� ���ߵ�
					}
					else
						en = lower_bound(sum2, sum2 + k, sum2[mid]) - sum2;
			}
			else if (sum2[mid] + sum1[i] <= 0) {
				st = mid + 1;
			}
			else
				en = mid - 1;
		}
	}
	cout << cnt;
	return 0;
}