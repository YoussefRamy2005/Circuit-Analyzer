#include <bits/stdc++.h>
#include <unordered_set>
#define int long long
#define ull unsigned long long
#define Youssef  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define tc int tc; cin>>tc; while(tc--)
#define sp setprecision(20);
#define bits(x) ceil(log2(x+1))
using namespace std;
const long double PI = 3.14159265358979323846;
const long long mod = 1e9 + 7;
const char nl = '\n';
constexpr int N = 2e5 + 5;

map<int , int> get_divisors(int n);
map<int , int> primes;
void prime_factors_freq(int n);
vector<bool> sieve(int n);
bool is_prime(int x);
ull nCr(ull n, ull r);
ull nPr(ull n, ull r);
int gcd(int a, int b);
int lcm(int a, int b);
int evaluateExpression(const string& expression);



int di[] = {1 , -1 , 1 , -1 , 2 , 2 , -2 , -2};
int dj[] = {2 , 2 , -2 , -2 , 1 , -1 , 1 , -1};

int dx[] = {1 , -1 , 0 , 0};
int dy[] = {0 , 0 , 1 , -1};



int limit_r, limit_c;
bool isvalid(int x, int y){
    return (x >= 1 && x <= limit_r && y >= 1 && y <= limit_c);
}

vector<vector<int>> vc(N);
vector<pair<int , int>> steps(N , {0 , -1});
vector<int> friends;
void dfs(int node , int dis , int par , int type) {
    for(auto n : vc[node]){
        if(n != par)
            dfs(n , dis+1 , node , type);
    }
    if(vc[node].size() == 1){
        if(type==1){
            steps[node].first = dis;
        }
        else{
            if(steps[node].second != -1) steps[node].second = min(steps[node].second , dis);
            else steps[node].second = dis;
            // cout<<dis<<' ';
        }
    }
}


void solve(){  

    int n, k; cin>>n>>k;
    steps.assign(N, {0, -1});
    friends.clear();
    for (int i = 0; i < N; i++)
    {
        vc[i].clear();
    }
    
    for (int i = 0; i < k; i++)
    {
        int x; cin>>x;
        friends.push_back(x);
    }
    for (int i = 0; i < n-1; i++)
    {
        int x, y; cin>>x>>y;
        vc[x].push_back(y);
        vc[y].push_back(x);
    }
    dfs(1 , 0 , -1 , 1);

    for (int i = 0; i < k; i++)
    {
        dfs(friends[i] , 0 , -1 , 2);
    }
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        if(vc[i].size() == 1 && i != 1)
            if(steps[i].first < steps[i].second){
                flag = true;
                break;
            }
    }
    cout<<((flag) ? "YES" : "NO");
    // for (int i = 1; i < steps.size(); i++)
    // {
    //     if(steps[i].first)
    //         cout<<i<<'-'<<steps[i].first<<'*'<<steps[i].second;
    // }
    cout<<nl;
    
    

}
        
signed main(){
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
    Youssef
    tc
        solve();


    return 0;
}



//

map<int , int> get_divisors(int n){
    map<int , int> mp;
    for (int i = 1; i*i <= n; i++){
        if(n%i == 0){
            mp[i]++;
            if((n/i) != i){mp[n/i]++;}
        }
    }
    return mp;
}
void prime_factors_freq(int n){ 
        for (int i = 2; i * i<= n; i++)
        {
            while(n%i == 0){                   
                primes[i]++;
                n /= i;
            } 
        }
        if(n>1){primes[n]++;}
    
    // return primes;
}
vector<bool> sieve(int n){
    vector<bool> primes (n+1 , true);
    primes[0] = primes[1] = false;
    for (int i = 2; i*i <= n; i++)
    {
        if(primes[i]){
            for (int j = i*i; j <= n; j+=i)
            {
                primes[j] = false;
            }
        }
    }
    return primes;
}
bool is_prime(int x){
    if(x < 2) return false;
    for (int i = 2; i*i <= x; i++)
    {
        if(x%i == 0){return false;}
    }
    return true;
}
ull nCr(ull n, ull r){
    if(r>n) return 0;
    ull start = max(n-r , r)+1;
    ull C = 1;
    ull i = 1;
    while(start<=n){
        C*=start++;
        C/=i++;
    }
    return C;
}
ull nPr(ull n, ull r){
    if(r>n) return 0;
    ull p = 1;
    ull i = 0;
    while(i<r) p*=n-i++;
    return p;
}
int gcd(int a, int b){
    while(b){
        a%=b;
        swap(a,b);
    }
    return a;
}
int lcm(int a, int b){
    return a*b/gcd(a,b);
}
int evaluateExpression(const string& expression) {
    int result = 0;
    stringstream ss(expression);
    int number;
    char plus;

    // Read numbers and the '+' symbol in between
    while (ss >> number) {
        result += number;
        ss >> plus; // This reads and skips the '+' sign
    }
    
    return result;
}