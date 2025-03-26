#include <iostream>
using namespace std;

int main()
{
    int a, b, c, freq[10]={0}, r;
    cin >> a >> b >> c;
    r = a*b*c;
    string s = to_string(r);
    for (auto c : s) freq[c-'0']++;
    for (int i=0; i<10; i++){
        cout << freq[i] << '\n';
    }

    return 0;
}