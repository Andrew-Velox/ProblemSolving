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
    ll int len; cin >> len;
    char c; cin >> c;
    string s; cin >> s;

    if(len==1 || c=='g'){
        cout << 0 << endl;
        return;
    }


    int f_to_g=0,i=0;
    while(s[i]!='g'){ 
        f_to_g++;
        i++;
    }

    ll int mx=INT_MIN,cnt=0,lst_cnt=0;
    int f=0;

    for(int x=0; x<len; x++){
        if(s[x]==c){
            while(s[x]!='g'){
                if(x==len-1){
                    cnt++;
                    f=1;
                    break;
                }
                cnt++;
                x++;
            }
            // cout << s[x] << " " << cnt << endl;
            if(f && cnt+f_to_g>mx) mx=cnt+f_to_g;
            else mx=max(mx,cnt);
            cnt=0;
        }
        
    }

  
    cout << mx << endl;


}

int main(){
    speed();
    ll int t; cin >> t;
    while(t--) solve();
    return 0;
}