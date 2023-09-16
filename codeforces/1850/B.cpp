#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        ll int len; cin >> len;
        ll int a[len],b[len];

        for(int x=0; x<len; x++){
            cin >> a[x] >> b[x];
        }

        int temp = -1,ans=0;
        for(int x=0; x<len; x++){
            if(a[x]<=10 && b[x]>temp){
                temp=b[x];
                ans=x;
            }
        }

        cout << ans+1 << endl;
    }
    return 0;
}