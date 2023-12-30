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
    int len,ans;
    cin >> len >> ans;
    ll ar[len];

    ll sum=1;
    for(int x=0; x<len; x++){
        cin >> ar[x];
        sum*=ar[x];
    }
    if(sum>2023) cout << "NO" << endl;
    else if(sum==2023){
        cout << "YES" << endl;
        for(int x=1; x<=ans; x++){
            cout << 1;
            if(x!=ans) cout << " ";
        }
        cout << endl;
    }
    else if(sum==1){
        cout << "YES" << endl;
        for(int x=1; x<=ans-1; x++) cout << 1 << " ";
        cout << 2023 << endl;
    }
    else{
        bool f=false;
        int x=2;
        int tmp=sum;
        while(tmp*x<=2023){
            // tmp*=x;
            x++;
            if(sum*x==2023){
                f=true;
                break;
            }
        }

        if(f){
            cout << "YES" << endl;
            for(int y=1;y<=ans-1; y++){
                cout << 1 << " ";
            }
            cout << x << endl;
        }
        else cout << "NO" << endl;
    }
    
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}