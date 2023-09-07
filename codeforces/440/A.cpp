#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll int n;
    cin >> n;
    ll int ar[n];
    
    for(ll int x=0; x<n-1; x++){
        cin >> ar[x];
        }
    
    ll int fi;
    for(int x=0; x<n-1; x++){
        if(ar[x]!=1){
        fi = 1;
        }
        else{
            fi=0;
            x=n;
        }
    }
    
    if(fi==1){
        cout << fi << endl;
        }
    else{
        
        sort(ar, ar+n-1);
        ll int lw = ar[0];
        if(n==2 && lw>1){
            lw--;
            cout << lw << endl;
        }
    
        else if(n!=ar[n-2]){
            cout << n << endl;
        }
        
        else{
        for(int x=0; x<n-1; x++){
            if(lw==ar[x]){
                lw++;
        }
            else{
                break;
        }
    }
    
        if(lw>n){
            lw = ar[0];
            cout <<  lw-1 << endl;
        }
        else{
            cout << lw<< endl;
        }
    }
   }
    return 0;
}