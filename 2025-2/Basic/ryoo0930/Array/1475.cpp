#include <bits/stdc++.h>

using namespace std;

void fast_io() { ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }


int main()
{
    fast_io();
    vector<int> card(10, 0);
    string number; cin >> number;
    for(int i = 0; i < number.size(); i++) { card[number[i] - '0']++; }
    
    int sixAndNine = (card[6] + card[9] + 1) / 2;
    card[6] = 0; card[9] = 0;
    int max = *max_element(card.begin(), card.end());

    if(max > sixAndNine) cout << max;
    else cout << sixAndNine;
    
    return 0;
}

