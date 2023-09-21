#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int t;
    cin >> t;

    while(t--){
        ll int size;
        cin >> size;
        ll int ar[size];
        
        
        for(int x=0; x<size; x++) cin >> ar[x];    
        
        int sml = ar[0];
        for(int x=0; x<size; x++){            
            if(ar[x]<sml) sml = ar[x];
            }
        
        
        int temp=sml;
        sml+=1;

        ll int res=1;
        for(int x=0; x<size; x++){
            if(temp==ar[x]) {
                ar[x]=ar[x]+1;
                temp=-1;
            }          
        }
        
        for(int x=0; x<size; x++) res*=ar[x];
        cout << res << endl;

        
    }
    return 0;
}