#include <bits/stdc++.h> 
using namespace std;
 
void solve(){
    string s;
    cin >> s;
    string s2 = s;
    int n = s.length();
    vector<int> one;
    vector<int> zero;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            zero.push_back(i);
        }
        else{
            one.push_back(i);
        }
    }
    int minn = min(zero.size(),one.size());
    int k = 0;
    for(int i=0;i<minn;i++){
        s[zero[k]] = '1';
        s[one[k]] = '0';
        k++;
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(s[i]!=s2[i]){
            count++;
        }
        else{
            break;
        }
    }
    cout << n - count << endl;
}
int main(){
 long long t;
 cin >> t;
 for(int it=1;it<=t;it++) {
     solve();
 }
 return 0;
}