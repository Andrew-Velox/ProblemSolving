#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t;
    cin >> t;

    int res = 0;
    while(t--){
        string s;
        cin >> s;

        if(s=="Tetrahedron") res += 4;
        else if(s=="Cube") res += 6;
        else if(s=="Octahedron") res += 8;
        else if(s=="Dodecahedron") res += 12;
        else res += 20;
    }

    cout << res << endl;
    return 0;
}