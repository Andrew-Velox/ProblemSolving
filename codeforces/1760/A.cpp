#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int n; cin >> n;

    while(n--){
        ll int a,b,c;
        cin >> a >> b >> c;

        if(a<b && a>c || a>b && a<c) cout << a << endl;
        else if(b>a && b<c || b>c && b<a) cout << b << endl;
        else cout << c << endl;
    }
    return 0;
}