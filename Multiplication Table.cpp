#include<bits/stdc++.h>
using namespace std ;
int main ()
{
     int n,i ;
     cin>>n;
     for(i=1;i<=10;i++)
     {
          int mul = i*n;
          cout<<i<<" x "<<n<<" = "<<mul<<endl;
     }
     return 0;
}