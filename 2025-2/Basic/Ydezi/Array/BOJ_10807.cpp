#include<bits/stdc++.h>	
using namespace std;

int arr[ 1000 ];	

int main(){
	int n, v, sum = 0;	
	cin >> n;		
	for( int i = 0; i < n; i ++ )	cin >> arr[ i ];	
	cin >> v;
	for( int i = 0; i < n; i ++  ){			
		if( arr[ i ] == v )	sum ++;	
	}
	cout << sum;	
  return 0;
}
