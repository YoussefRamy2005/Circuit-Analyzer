#include<iostream>
using namespace std;

int main(){

int n,m,a;

cin>>n>>m>>a;

long long x = m/a;
long long y = n/a;


if (m%a != 0)
{
    x=x+1;
}

if (n%a != 0)
{
    y= y+1;
}
 long long k = x*y;
cout<<k;

return 0;

}