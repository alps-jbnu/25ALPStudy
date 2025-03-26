#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;

	while (n!=0) {
		string l;
		cin >> l;
		list<char> editor;
		auto cursor = editor.begin();
		
		for (char command : l) {
			if (command == '-') {
				if (cursor != editor.begin()) {
					cursor--;
					cursor = editor.erase(cursor);
				}
			}

			else if (command == '<') {
				if (cursor != editor.begin()) {
					cursor--;
				}
			}

			else if (command == '>') {
				if (cursor != editor.end()) {
					cursor++;
				}
			}

			else {
				editor.insert(cursor, command);
			}
		}
		for (char command : editor) {
			cout << command;
		}
		cout << endl;
		n--;
	}
	return 0;
}
