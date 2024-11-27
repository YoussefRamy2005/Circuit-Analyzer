#include"bits/stdc++.h"
using namespace std;



int main(){
    
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

int t;
cin>>t;
int kk[9];
while (t--)
{
    int n; cin>>n;
    int ans=1;
    for (int i = 0; i < n; i++)
    {
        
        cin>>kk[i];
    }
    
    sort(kk, kk+n);
    kk[0]+=1;
    for (int p =0; p < n; p++)
    {
        ans*=kk[p];
    }
    cout<<ans<<'\n';
}


return 0;
}