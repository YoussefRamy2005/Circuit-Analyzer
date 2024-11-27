#include"bits/stdc++.h"
using namespace std;



int main(){
    
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

int t; cin>>t;
while(t--){

int n; cin>>n;
int arr[100];
 for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
 
 int even=0;
 int odd=0;
  
  for (int j = 0; j < n; j++)
  {
    if(arr[j]%2==0) even+=arr[j];
    else odd+=arr[j];
  }
  
if(even> odd) cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';



}

return 0;
}