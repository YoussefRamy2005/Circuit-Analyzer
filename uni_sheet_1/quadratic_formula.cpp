#include <bits/stdc++.h>
#include <unordered_set>
#define int long long
#define Youssef  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define tc int tc; cin>>tc; while(tc--)
using namespace std;
const long double PI = acosl(-1);
const char nl = '\n';



// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);


// log2(x+1) "ceil"  how many bits x needs


signed main(){
    

    double a, b, c; cin>>a>>b>>c;

    if(a == 0){
        if(b==0){
            cout<<"The input isnt a function";
        }
        else{
            cout<<"Only 1 answer: x = "<<(-c/b);
        }
    }
    else{
        if((b*b) < (4*a*c)){
            cout<<"No Real Solutions";
        }
        else if((b*b) == (4*a*c)){
            cout<<"Only 1 answer: x = "<<(-b/(2*a));
        }
        else{
            double root_1, root_2;
            root_1 = ((-b) + (sqrt((b*b) - (4*a*c)))) / (2*a);
            root_2 = ((-b) - (sqrt((b*b) - (4*a*c)))) / (2*a);
            cout<<"Answer 1: x = "<<root_1<<nl;
            cout<<"Answer 2: x = "<<root_2<<nl;
        }
    }


    return 0;
}