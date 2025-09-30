#include<bits/stdc++.h>
using namespace std;

int arr[ 100 ];

int main(){
	ios_base::sync_with_stdio( false );
	cin.tie( 0 );
	cout.tie( 0 );
	
	long long a, b, c;
	cin >> a >> b >> c;
	long long k = a * b * c;
	
	while( k ){
		int i = k % 10;
		arr[ i ] ++;
		k /= 10;
	}
	for( int i = 0; i < 10; i ++ )
		cout << arr[ i ] << '\n';

  return 0;
}
