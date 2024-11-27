#include"bits/stdc++.h"
using namespace std;



int main(){
    
    ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  
int t; cin>>t;
while(t--){

int n; 
cin>>n;
string a;
cin>>a;

int x=0;
int y=0;
int ans=0;

for (int i = 0; i < n; i++)
{
  if(a[i]=='U') y++;
  else if(a[i]=='D') y--;
  else if(a[i]=='R') x++;
  else  x--;

  if (x==1 && y==1) ans++;

}


if(ans>0) cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';

}

return 0;
}