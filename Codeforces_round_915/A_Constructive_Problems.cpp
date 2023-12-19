#include <bits/stdc++.h> 
using namespace std;
 
long long MOD = 998244353;
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

void solve(){
    int n,m;
    cin>>n>>m;
    cout << max(n,m) << endl;
}
int main()
{
 fast_cin();
 long long t;
 cin >> t;
 for(int it=1;it<=t;it++) {
     solve();
 }
 return 0;
}