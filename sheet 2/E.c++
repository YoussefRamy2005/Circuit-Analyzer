#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int t; cin>>t;
while(t--){
    int n ; cin>>n;
    n*=2;
    int even=0; int odd=0;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        if(x%2==0)even++;
        else odd++;

    }
    if (even==odd)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    
}
    return 0;
}
