#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int t;
    cin >> t;
    while(t--){
        ll int a,b; cin >> a >> b;;
        if(a%b!=0 || a<b) cout << 1 << endl << a << endl;
        else cout << 2 << endl << 1 << " " << a-1 << endl;
    }   
    return 0;
}