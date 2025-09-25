#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    int cnt = 0;
    int p_s1 = 0, p_s2 = 0;
    while (p_s1 != s1.size() || p_s2 != s2.size()) {
        if (s1[p_s1] == s2[p_s2]) {
            p_s1++;
            p_s2++;
        }
        else if (s1[p_s1] - 'a' > s2[p_s2] - 'a') {
            if (p_s2 != s2.size()) {
                p_s2++;
            }
            else {
                p_s1++;
            }

            cnt++;
        }
        else if (s1[p_s1] - 'a' < s2[p_s2] - 'a'){
            if (p_s1 != s1.size()) {
                p_s1++;
            }
            else {
                p_s2++;
            }

            cnt++;
        }
    }

    cout << cnt;

    return 0;
}