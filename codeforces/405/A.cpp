#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int len;
    cin >> len;
    
    ll int ar[len];
    
    for(ll int x=0; x<len; x++){
        cin >> ar[x];
    }
    
    //sort(ar, ar+len-1);
    
    for(ll int x=0; x<len-1; x++){
        for(ll int y=x+1; y<len; y++){
            if(ar[y]<ar[x]){
                ll int temp = ar[y];
                ar[y] = ar[x];
                ar[x] = temp;
            }
        }
        
    }
    
    
    for(ll int x=0; x<len; x++){
        cout << ar[x] << " ";
    }
    
    cout << endl;
    
    return 0;
}