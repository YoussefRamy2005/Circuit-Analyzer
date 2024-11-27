#include<iostream>
using namespace std;

int main(){

int s,t,x;
cin>>s>>t>>x;

if (t>s)
{
   if (x>=s && x<t)
   {
    cout<<"Yes";
   }
   else(cout<<"No");
}

if (s>t)
{
    if (x>=s || x<t)
    {
        cout<<"Yes";
    }
    else(cout<<"No");
}


return 0;

}