#include <bits/stdc++.h> 
using namespace std;
 
void solve(){
    string s;
    cin >> s;
    int n = s.length();
    int indx = 0;
    for(int i=1;i<n;i++){
        if(s[i]!='0'){
            indx = i;
            break;
        }
    }
    if(indx == 0){
        cout << "-1" << endl;
        return;
    }
    string s1 ="";
    for(int i=0;i<indx;i++){
        s1 += s[i];
    }
    string s2 = "";
    for(int i=indx;i<n;i++){
        s2 += s[i];
    }
    int a = stoi(s1);
    int b = stoi(s2);
    if(a>=b){
        cout << "-1" << endl;
    }
    else{
        cout << a << " " << b << endl;
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