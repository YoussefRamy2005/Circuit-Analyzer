#include"bits/stdc++.h"
using namespace std;



int main(){
    
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

double a , b , c ;
cin>>a>>b>>c;

double root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a) ;

double root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a) ;

cout<<fixed<<setprecision(15);
cout<<max(root1,root2)<<'\n'<<min(root1,root2) ;



return 0;
}