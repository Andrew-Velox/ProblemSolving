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
    string cpy=s;
    
    int flag=0;
    
    int nt_sm=0;
    sort(cpy.begin(),cpy.end());
    for(int x=0; x<cpy.size()-1; x++){
        if(cpy[x]!=cpy[x+1]){
            nt_sm=1;
            break;
        }
    }

    if(nt_sm==0){
        cout << -1 << endl;
    }

    else{

        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                flag=1;
                break;
            }
            i++;
            j--;
        }

        cout << (flag ? s: cpy) << endl;
        
    }

}

int main(){
    speed();
    ll int t; cin >> t;
    while(t--) solve();
    return 0;
}