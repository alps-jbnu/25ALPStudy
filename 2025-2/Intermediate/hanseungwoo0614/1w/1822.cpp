/* Online C++ Compiler and Editor */
#include <iostream>
#include <algorithm>

using namespace std;

int a[5000000];
int b[5000000];
int arr[5000000];

int main()
{
    ios::sync_with_stdio(0);
  cin.tie(0);
   int n, m;
   cin>>n>>m;
   int cnt=0;
   
   for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
        cin>>b[i];
   
   sort(a,a+n);
   sort(b,b+m);
   
   
   for(int i=0;i<n;i++)
   {
       if(!binary_search(b,b+m,a[i]))
            {
                arr[cnt]=a[i];
                cnt++;
                
            }
   }
   
   cout<<cnt<<"\n";
   for(int i=0;i<cnt;i++)
        cout<<arr[i]<<" ";
   
   return 0;
}
