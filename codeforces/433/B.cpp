#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll int len; cin >> len;
    ll int ar[len],c_ar[len];
    
    ll int ar_sum[len],ar_sum2[len]; // to store sum of arrays
    ll int pew=0;
    for(int x=0; x<len; x++){
        cin >> ar[x];
        pew+=ar[x];
        ar_sum[x] = pew;  
        c_ar[x]=ar[x];
    }

    // sum of shorting array ----------------
    sort(c_ar,c_ar+len);
    ll int pwe=0;
    for(int x=0; x<len; x++){
        pwe+=c_ar[x];
        ar_sum2[x] = pwe;  
    }

    ll int q; cin >> q;

    while(q--){
        ll int qn,l,r; cin >> qn >> l >> r;
        if(qn==1){
            if(l>1) cout << ar_sum[r-1]-ar_sum[l-2] << endl;
            else cout << ar_sum[r-1] << endl;
        }

        else if(qn==2){
            if(l>1) cout << ar_sum2[r-1]-ar_sum2[l-2] << endl;
            else cout << ar_sum2[r-1] << endl;
        }
    }


    return 0;
}