#include<iostream>
using namespace std;

int main(){

long long x;
cin>>x;
long long y=x/2;
long long z=(x-1)/2;
if (x%2==0)
{
    cout<<(x/2);

}

else( cout<<(z-x) );



return 0;

}