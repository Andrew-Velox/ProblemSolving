#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int num;
    cin >> num;
    int luck[]={4,7,44,47,74,77,444,447,477,474,744,747,777,774};

    string n = to_string(num);

    ll int cnt=0;
    for(int x=0; x<n.size(); x++){
        if(n[x]=='4' || n[x]=='7') cnt++;
    }

    int y=0;
    for(int x=0; x<13; x++){
        if(cnt==luck[x]) y=1;
    }

    if(y==1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}