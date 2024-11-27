#include<iostream>
using namespace std;

int main(){

float a,b,c,x;
cin>>a>>b>>c>>x;
float k = (c)/(b-a);
if(x<=a){
    cout<<1;

}
else if (x>b) cout<<0;
else(cout<<k);


return 0;

}