#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fx(x) fixed<<setprecision(x)
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve(){
    string s; cin >> s;

    stack<char> st;
    for(char c: s){
        if(st.empty()){
            st.push(c);
            continue;
        }
        if(c=='B' && st.top()=='A' || c=='B' && st.top()=='B'){
            st.pop();
        }
        else st.push(c);
    }

    cout << st.size() << endl;
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}