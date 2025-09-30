#include <bits/stdc++.h>

using namespace std;

void fast_io() { ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }


int main()
{
    fast_io();
    int size = 0; cin >> size;
    vector<int> v(size); for(auto& i : v) cin >> i; sort(v.begin(), v.end());
    int targetNumber = 0; cin >> targetNumber;
    
    int start = 0, end = size - 1;
    int count = 0;
    
    while(start < end) {
        int currentNumber = v[start] + v[end];
        if(currentNumber > targetNumber) end--;
        else if (currentNumber < targetNumber) start++;
        else { count++; start++; end--; }
    }

    cout << count;
    
    return 0;
}

