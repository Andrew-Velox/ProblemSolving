#include <bits/stdc++.h>
#include <cmath>
#define ll long long
using namespace std;

int main(){
    ll int t;
    cin >> t;

    while(t--){
        ll int n;
        cin >> n;
        int temp=n;
        while(temp>10000){
            temp =temp/10;
        }

        if(n<2050){
            cout << -1 << endl;
        }
        else{
            int count=0;
            while(n>=2050){
                ll int res=2050;
                count++;
                while(res<=n){
                    res*=10;
                }

                res/=10;
                n = n-res;
            }
            if(n!=0){
                cout << -1 << endl;
            }
            else{
                cout << count << endl;
            }
        }

    }
    return 0;
}