#include"bits/stdc++.h"
#define int long long
using namespace std;



signed main(){
    
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

 int red; int blue;
 cin>>red>>blue;
 int petsa= max(red,blue)-1;
 cout<<petsa<<" "<<min(red,blue);
 
return 0;
}