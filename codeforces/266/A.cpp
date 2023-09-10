#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;

    int count=0;
    for(int x=0; x<n-1; x++){
        if(s[x]==s[x+1]){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}