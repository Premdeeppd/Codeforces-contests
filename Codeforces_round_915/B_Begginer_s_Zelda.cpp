#include <bits/stdc++.h> 
using namespace std;
 
long long MOD = 998244353;
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 

void solve(){
    int n;
    cin>>n;
    int count = 0;
    unordered_map<int,int> mp;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        mp[x]++;
        mp[y]++;
        if(mp[x]>2){
            count++;
        }
        if(mp[y]>2){
            count++;
        } 
    }
    cout << count + 1 - count/2 << endl;
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