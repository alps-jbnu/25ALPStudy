#include <iostream>
#include <list>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	list<int> editor;
	for (int i = 1; i <= n; i++) {
		editor.push_back(i);
	}

	auto cursor = editor.begin();
	cout << "<";

	while (!editor.empty()) {
		for (int i = 0; i < k - 1; i++) {
			++cursor;
			if (cursor == editor.end()) {
				cursor = editor.begin();
			}
		}
		cout << *cursor;
		cursor = editor.erase(cursor);

		if (!editor.empty()) {
			cout << ", ";
		}

		if (cursor == editor.end()) {
			cursor = editor.begin();
		}
	}
	cout << ">" << endl;
	return 0;
}
