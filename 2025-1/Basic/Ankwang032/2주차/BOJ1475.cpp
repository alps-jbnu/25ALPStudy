#include <iostream>
using namespace std;

int freq[10];
int main()
{
    int N;
    cin >> N;
    while(1){
        freq[N%10] += 1;
        N /= 10;
        if (N==0) break;
    }

    freq[6] = (freq[6]+freq[9]+1)/2;
    int MAX = freq[0];

    for (int i = 1; i<9; i++){
        if (MAX < freq[i]) MAX=freq[i];
    }
    cout << MAX << endl;
    return 0;
}