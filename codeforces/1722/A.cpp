#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t; cin >> t;
    
    while(t--){
        ll int len; cin >> len;
        string s; cin >> s;

        if(len!=5) cout << "NO" << endl;
        else{
            sort(s.begin(), s.end());
            if(s=="Timru") cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}