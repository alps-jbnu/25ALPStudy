#include<bits/stdc++.h>
using namespace std;

int arr[ 20 ];	
main(){
	int n;
	cin >> n;
	while( n ){
		int k = n % 10;
		if( k == 9 )	arr[ 6 ] ++;
		else	arr[ k ] ++;
		n /= 10;
	}
	if( arr[ 6 ] & 1 )	arr[ 6 ] = arr[ 6 ] / 2 + 1;
	else arr[ 6 ]/= 2;
	
	sort( arr, arr + 10 );
	cout << arr[ 9 ];
	
	return 0;
}
