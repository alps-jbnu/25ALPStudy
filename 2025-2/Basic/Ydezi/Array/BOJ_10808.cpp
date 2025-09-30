#include<bits/stdc++.h>
using namespace std;

int arr[ 150 ];
int main(){
	string s;
	cin >> s;
	for( int i = 0; i < s.size(); i ++ )
		arr[ s [ i ] ] ++;
	
	for( int i = 97; i <= 122; i ++ )
		cout << arr[ i ] << " ";
	
	return 0;
}
