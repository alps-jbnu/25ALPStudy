#include <iostream>
using namespace std;

int main()
{
    string s;
    int arr[26] = {0};
    cin >> s;
    for (auto c : s)
        arr[c-'a']++;
    for(int i=0; i<26; i++)
        cout << arr[i] << ' ';

        return 0;
}