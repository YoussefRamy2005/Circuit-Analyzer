#include<iostream>
using namespace std;

int main(){

int k;
cin>>k;

int h=21;

if(k>=60)
{
h++;

}

if (k>=60)
{
    k-=60;
}


if (k<10)
{
    cout<<h<<":"<<0<<k;
}
else(cout<<h<<":"<<k);


return 0;

}