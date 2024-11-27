#include"bits/stdc++.h"
using namespace std;



int main(){
    
    ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
int a,b,c,d,e,f,x ; cin>>a>>b>>c>>d>>e>>f>>x;

int tt = x%(a+c);
int ta = x%(d+f);

int tak = (b*a)*(x/(a+c));
int aok = (e*d)*(x/(d+f));

   if(tt>=a){

    tak+=(b*a);
   }
   else{
     tak+= (b*tt);
   }

   if(ta>=d){
    
     aok+=(e*d);
   }
   else {
    aok+=(e*ta);
   }
   
   if (tak>aok) cout<<"Takahashi";
   else if (tak<aok) cout<<"Aoki";
   else cout<<"Draw";


return 0;
}