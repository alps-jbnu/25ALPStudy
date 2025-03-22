#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    int x = 0;
    int max = INT_MIN;
    int arr[10] = { 0 };

    cin >> n;

    while (!n.empty()) {
        char s = n.back();
        arr[s - '0']++;
        n.pop_back();
    }
    int NUM = (arr[6] + arr[9] + 1) / 2;
    arr[6] = NUM;
    arr[9] = NUM;


    for (int i = 1;i < 10;i++) {


        if (max < arr[i])
            max = arr[i];
    }
    cout << max;
}
        
           
            


    
 

    




    
      
   
        
  
   
