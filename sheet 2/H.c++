#include"bits/stdc++.h"
using namespace std;



int main(){

  char arr[10][10];
  int t ; cin>>t;
  
  
   for (int tc = 0; tc < t; tc++){
    
    int ans=0;

     for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
          
          cin>> arr[i][j];

          if(arr[i][j] == '.') continue;
          if(i==0 || i== 9 || j==0 || j==9) ans++;
          else if(i==1 || i== 8 || j==1 || j==8) ans+=2;
          else if(i==2 || i== 7 || j==2 || j==7) ans+=3;
          else if(i==3 || i== 6 || j==3 || j==6) ans+=4;
          else ans+=5;

          

        }
      }
      cout<<ans<<'\n';
   }
   

  return 0;  
}