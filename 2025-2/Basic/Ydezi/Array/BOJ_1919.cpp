#include<bits/stdc++.h>
using namespace std;

int arr[ 2 ][ 150 ];
int main(){
	string a, b;
	cin >> a >> b;
	int k = 0;
	for( int i = 0; i < a.size(); i ++ )	arr[ 0 ][ a[ i ] ] ++;
	for( int i = 0; i < b.size(); i ++ )	arr[ 1 ][ b[ i ] ] ++;
	
	for( int i = 97; i <= 122; i ++ ){
		if( arr[ 0 ][ i ] != arr[ 1 ][ i ] ){
			k += abs( arr[ 0 ][ i ] - arr[ 1 ][ i ] );
		}
	}
	cout << k;
	
	return 0;
}
