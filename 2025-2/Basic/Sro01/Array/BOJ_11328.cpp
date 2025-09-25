#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        int sz = s1.size();

        vector<char> vec1;
        vector<char> vec2;

        for (int i = 0; i < sz; i++) {
            vec1.push_back(s1[i]);
            vec2.push_back(s2[i]);
        }

        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());

        string n_s1(vec1.begin(), vec1.end());
        string n_s2(vec2.begin(), vec2.end());

        if (n_s1 == n_s2) {
            cout << "Possible\n";
        } else {
            cout << "Impossible\n";
        }
    }

    return 0;   
}