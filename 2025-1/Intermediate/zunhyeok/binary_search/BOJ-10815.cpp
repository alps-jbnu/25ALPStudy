#include <bits/stdc++.h>
using namespace std;
const int MAX = 500000;
int arr[MAX];

void binary_search(int st, int en, int target) {
	while (en >= st) { // st�� en���� Ŀ���� ����
		int mid = (st + en) / 2; // �߰���
		if (arr[mid] == target) { // ã��
			cout << 1 << " ";
			return;
		}
		else if (arr[mid] < target) { // mid�� target���� �۴ٸ�
			st = mid + 1;
		}
		else { // mid�� target���� ũ�ٸ�
			en = mid - 1;
		}
	}
	cout << 0 << " "; // ��ã��
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, M;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N); //���� Ž������ ����
	cin >> M;
	for (int i = 0; i < M; i++) {
		int a;
		cin >> a;
		binary_search(0, N - 1, a);
	}
	return 0;
}