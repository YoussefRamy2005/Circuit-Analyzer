#include"bits/stdc++.h"
using namespace std;



int main(){
    
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

int a , b;
cin>>a>>b;
int n =(a/2)+(a%2);
int rem = n%b;
if(b>a) cout<<-1;
else if (a==b) cout<<b;
else if (rem==0) cout<<n;
else cout<<(n+b-rem);

return 0;
}