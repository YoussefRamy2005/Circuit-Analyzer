#include"bits/stdc++.h"
// #define int long long
using namespace std;



int main(){
    
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

int n , m ;
cin>>n>>m;
int partial_sum[120] = {0};
for (int i = 0; i < m; i++)
{
    int a,b;
    cin>>a>>b;
    partial_sum[a]++;
    partial_sum[b+1]--;

}
for (int i = 1; i <= n+1; i++){
     partial_sum[i] += partial_sum[i-1];
     }

for (int i = 1; i <=n ; i++)
{
    if(partial_sum[i] != 1){
        cout<<i<<' '<<partial_sum[i];
        return 0;
    }
}
cout<<"OK";


return 0;
}