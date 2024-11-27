#include"bits/stdc++.h"
using namespace std;



int main(){
    
    ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
int n , a , b ; cin>>n>>a>>b;

int m = abs(b)%n ;

if(b==0 || m==0){
    cout<<a;
}

else if(b>0){
   
   if(a+m > n){
    cout<<((a+m)-n);
   }
   else{
    cout<<(a+m);
   }
}

else if(b<0){

    if(a-m < 0){
     cout<<((n-m)+(a));
    }
    else if(a-m==0){
        cout<<n;
    }

     else{
        cout<<(a-m);
        }  
}
 
return 0;
}