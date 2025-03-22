#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, arr[10] = {0, }, temp, max = -1;
    cin >> n;
    
    string str_n = to_string(n);
    for(int i = 0; i < str_n.length(); i++){
        arr[str_n[i] - '0']++;
    }

    for(int i = 0; i < 10; i++){
        if(i == 6 || i == 9) continue;
        if(arr[i] > max){
            max  = arr[i];
        }
    }
    
    temp = arr[6] + arr[9];

    if(temp % 2 == 0){
        temp /= 2;
    }
    else{
        temp = temp / 2 + 1; 
    }

    if(temp > max){
        max = temp;
    }
    
    cout << max;
    return 0;
}
