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
            
            string xx="Timru";
            sort(s.begin(), s.end());
            int cnt=0;
            for(int x=0; x<len; x++){
                if(s[x]==xx[x]) cnt++;
                //cout << xx[x] << " " << s[x] << endl;
            }
        
            if(cnt==5) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}