#include"bits/stdc++.h"
using namespace std;



int main(){

int n; cin>>n;

for (int i = 0; i < n; i++)
{
 string x, y; cin>>x>>y;

    reverse(x.begin() , x.end());
    reverse(y.begin() , y.end());


     string sum= to_string(stoi(x) + stoi(y));
      

    while(sum.back() == '0')  sum.pop_back();

    reverse(sum.begin() , sum.end());

    cout<<sum<<'\n';

}
return 0;
}