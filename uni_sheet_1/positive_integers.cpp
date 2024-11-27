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

int input_handling(int x){
if(x<1 || cin.fail()){
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout<<"Please enter a valid integer\nInteger: ";
      cin>>x;
    }

else{
    return x;
}
    return input_handling(x);
}
        
signed main(){

    int x;
    cout<<"Please enter a positive integer\nInteger: ";
    cin>>x;
    int num = input_handling(x);
    if(num==1){
      cout<<"No positive integers smaller than 1";
    }
    else{
      cout<<"positive integers smaller than "<<num<<":\n";
      for (int i = num-1; i > 0; i--)
      {
        cout<<i<<nl;
      }
    }

    return 0;
}
