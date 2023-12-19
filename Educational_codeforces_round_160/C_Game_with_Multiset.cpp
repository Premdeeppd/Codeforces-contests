#include <bits/stdc++.h> 
using namespace std;
 
void solve(){
    int m;
    cin >> m;
    int cnt[30];
    memset(cnt,0,sizeof(cnt));
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        if(x==1) cnt[y]++;
        else{
            for(int i=29;i>=0;i--){
                y = y - (min(y>>i,cnt[i])<<i);
            }
            if(y==0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
}
int main(){
 long long t=1;
 for(int it=1;it<=t;it++) {
     solve();
 }
 return 0;
}