#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int tc = 1;
////    cin>>tc;
//    while(tc--)
//        TT();

    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        int row1[m];
        int row2[m];
        for(int i=0;i<m;i++) cin>>row1[i];
        for(int i=0;i<m;i++) cin>>row2[i];
        if(m == 1){
            cout<<0<<'\n';
            continue;
        }
        for(int i=1;i<m;i++) row1[i] += row1[i-1];
        for(int i=1;i<m;i++) row2[i] += row2[i-1];
//        for(auto &i : row1) cout<<i<<' ';
//        cout<<'\n';
//        for(auto &i : row2) cout<<i<<' ';
//        cout<<'\n';
        int scores[m];
        for(int i=0;i<m;i++){
            //check score of bob if alice moves down from cell i
            if(i == m-1) scores[i] = row2[i-1];
            else if(i == 0) scores[i] = row1[m-1] - row1[i];
            else{
                int op1 = row1[m-1] - row1[i] ;
                int op2 = row2[i-1] ;
                scores[i] = max(op1,op2);
            }
        }
//        for(auto &i : scores) cout<<i<<' ';
//        cout<<'\n';
        sort(scores,scores+m);
        cout<<scores[0]<<'\n';
    }

    return 0;
}