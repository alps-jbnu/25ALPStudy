#include<bits/stdc++.h>
using namespace std;

int arr[ 5 ][ 10 ];
int main(){
	int n, k, room = 0;
	cin >> n >> k;
	for( int i = 0; i < n; i ++ ){
		int a, b;
		cin >> a >> b;
		arr[ a ][ b ] ++;
	}
	
	for( int i = 0; i < 2; i ++ ){
		for( int j = 1; j <= 6; j ++ ){
			if( arr[ i ][ j ] % k ) room ++;
			room += arr[ i ][ j ] / k;
		}
	}
	
	cout << room;
	
	return 0;
}
