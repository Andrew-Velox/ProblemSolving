#include <bits/stdc++.h>
#include <math.h>
#define ll long long
using namespace std;

int main(){
    ll int t; cin >> t;
    
    while(t--){
        string s="314159265358979323846264338327";
        string in; cin >> in;
        ll int cnt=0;
        for(int x=0; x<s.size(); x++){
            if(in[x]==s[x]) cnt++;
            else x=s.size();
        }
        cout << cnt << endl;
    }
    return 0;
}