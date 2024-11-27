#include"bits/stdc++.h"
#define int long long
using namespace std;



signed main(){
    
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

int t; 
cin>>t;
while(t--){
    int n ;string s;
    cin>>n>>s;
    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }

    s.erase(unique( s.begin() , s.end() ) , s.end());

    (s=="meow") ? cout<<"YES\n" : cout<<"NO\n";
    
}
return 0;
}