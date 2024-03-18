#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){

    ll len; cin>> len;
    string s; cin >> s;

    bool f=true;
    ll cnt=0;


    ll cnt_r=0,cnt_b=0, cnt_w=0;
    for(int x=0; x<len; x++){
        if(s[x]=='R') cnt_r++;
        else if(s[x]=='B') cnt_b++;
        
        else{
            if((cnt_r==0 && cnt_b!=0) || (cnt_r!=0 && cnt_b==0)){
                f=false;
                break;
            }
            cnt_w++;
            cnt_r=0;
            cnt_b=0;
        } 
    }

    if(len==cnt_w) cout << "YES" << endl;
    else if(f){

        if((cnt_r==0 && cnt_b!=0) || (cnt_r!=0 && cnt_b==0)) cout <<"NO" << endl;
        else cout << "YES" << endl;
    }

    else cout <<"NO" << endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t; cin >> t;
    while(t--) solve();
    return 0;
}