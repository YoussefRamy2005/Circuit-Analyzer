#include"bits/stdc++.h"
using namespace std;



int main(){
    
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

int n , m ;
cin>>n>>m;


if(n%2==0){

   if(m<=(n/2)) cout<<++m;
   else{
    cout<<--m;
   }
}

else if(n==1) cout<<1;

else if(n%2!=0){
   
   if(m>(n/2)) cout<<--m;
   else{
    cout<<++m;
   } 

}


return 0;
}