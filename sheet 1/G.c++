#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int h = (n/100)*100;

n=n-h;

if (n<10)
{
    cout<<0<<n;

}

else(cout<<n);

return 0;

}