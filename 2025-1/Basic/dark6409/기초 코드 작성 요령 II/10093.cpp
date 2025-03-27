// 30점

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    unsigned long long a,b;
    cin >> a >> b;
    if(a==b){
      cout << 0;
      return 0;
    }
    
    unsigned long long M = a > b ? a : b;
    unsigned long long N = a < b ? a : b;
    
    if(M-N == 1) {
      cout << 0;
      return 0;
    }
    
    cout << M-N-1 << "\n";
    for(int i=N+1; i<M; i++)
      cout << i << " "; 
    
    return 0;
}
