#include"bits/stdc++.h"
using namespace std;

int main(){

int n; cin>>n ;

int one=0, two=0, three=0, four=0;

for (int i = 0; i < n; i++)
{
    int x; cin>>x;
    
    if(x==1) one++;
    if(x==2) two++;
    if(x==3) three++;
    if(x==4) four++;

}
    int ans=0;

    ans += four;
    int mn = min(three,one);
    ans += mn;
    three -= mn;
    one -= mn;

    ans += three;
    ans += two/2;
    
    (two%2 !=0) ? two = 1 : two = 0;

    if(two==1) {

        one-=2;
        ans ++;

    }

    if(one>0){
        ans += one/4;
        if(one%4 != 0) ans++;
    }

cout<<ans;

 return 0;
}