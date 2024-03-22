#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;


void solve(){
    ll len; cin>>len;
    ll itm; cin>>itm;

    string s; cin>>s;

    map<char,int> mp;
    set<char> st;

    for(char val: s){
        mp[val]++;
        st.insert(val);
    }

    ll cnt=0;
    ll odd_itm=0;
    for(auto v: st){
        if(mp[v]==1) cnt++;
        if(mp[v]>1 && mp[v]%2==1) odd_itm++;
    
    }
    


    if(len-1==itm) cout << "YES" << endl;
    else if((odd_itm+cnt)-itm>1) cout << "NO" << endl;
    else{
        
        if((odd_itm+cnt)-itm==1 && (len-itm)%2==0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--) solve();
    return 0;
}