#include <bits/stdc++.h> 
using namespace std;
 

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = s;
    sort(s1.begin(),s1.end());
    if(s1==s){
        cout << "0" << endl;
        return;
    }
    int count = 1;
    vector<char> v(n,'0');
    vector<char> v1;
    char maxx = s[n-1];
    v1.push_back(s[n-1]);
    for(int i=n-2;i>=0;i--){
        if(s[i] >=maxx){
            count++;
            maxx = s[i];
            v1.push_back(s[i]);
        }
        else{
            v[i] = s[i];
        }
    }
    vector<char> v3 = v1;
    sort(v1.rbegin(),v1.rend());
    for(int i=0;i<v.size();i++){
        if (v[i] == '0'){
            v[i] = v1[v1.size()-1];
            v1.pop_back();
        }
    }
    vector<char> v2 = v;
    sort(v2.begin(),v2.end());
    if(v2 == v){
        while(v3.size()>2 && v3[v3.size()-1]==v3[v3.size()-2]){
            v3.pop_back();
        }
        cout<<v3.size()-1<<endl;
    }
    else{
        cout << "-1" << endl;
    }
}
int main(){

 long long t;
 cin >> t;
 for(int it=1;it<=t;it++) {
    solve();
 }
 return 0;
}