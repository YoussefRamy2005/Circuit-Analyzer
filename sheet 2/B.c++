#include"bits/stdc++.h"
using namespace std;



int main(){

int n; cin>>n;
for (int i = 0; i < n; i++)
{
    int x; cin>>x;
    if(x>=1900) cout<<"Division 1"<<'\n';
    else if(x>=1600) cout<<"Division 2"<<'\n';
    else if(x>=1400) cout<<"Division 3"<<'\n';
    else cout<< "Division 4"<<'\n';
}



return 0;
}
