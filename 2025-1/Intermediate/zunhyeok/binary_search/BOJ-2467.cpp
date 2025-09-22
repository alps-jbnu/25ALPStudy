#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int binary_search(int st, int en, int sol) {
	int c_num = st != sol ? arr[st] : arr[st + 1]; // c_num�� ��������� ������, st == sol == 0�̸� ������. 
	//�׷��� ���׿����ڷ� st == sol�϶��� arr[st+1]�� �ʱ�ȭ
	while (st <= en) {
		int mid = (st + en) / 2;
		if (mid == sol) {  //mid�� sol�̸� �Ѿ mid == sol �϶� c_num�� ���� ū�ϳ�.
			if (arr[mid] + arr[sol] < 0) {
				st = mid + 1;
			}
			else {
				en = mid - 1;
			}
			continue;
		}
		if (abs(c_num + arr[sol]) > abs(arr[mid] + arr[sol])) { //c_num�� mid�� ���ؼ� �� �������� c_num�� ����
			c_num = arr[mid];
		}
		if (arr[mid] + arr[sol] < 0) {
			st = mid + 1;
		}
		else if (arr[mid] + arr[sol] > 0) {
			en = mid - 1;
		}
		else { // arr[mid] + arr[sol] == 0�̸� �̰� ��������.
			return arr[mid];
		}
	}
	return c_num;
}

int main() {
	int n, min_sum = INT_MAX;
	int x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		int a = binary_search(0, n - 1, i);
		if (abs(arr[i] + a) < min_sum) { // ������ ����
			min_sum = abs(arr[i] + a);
			x = arr[i];
			y = a;
		}
	}
	cout << x << " " << y;
	return 0;
}