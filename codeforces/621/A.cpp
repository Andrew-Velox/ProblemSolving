#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int num;
    cin >> num;

    ll int ar[num];
    for(int x=0; x<num; x++) cin >> ar[x];

    ll int odd=0,eve=0,sum=0,small_odd=INT_MAX;
    for(int x=0; x<num; x++){
        if(ar[x]%2==1){
            if(small_odd>ar[x]) small_odd=ar[x];
        }
        sum+=ar[x];
        if(ar[x]%2==1) odd++;
        else eve++;
    }

    ll int sem=1;
    for(int x=0; x<num-1; x++){
        if(ar[x]==ar[x+1]) sem++;
    }

    if(odd==num){
        ll int res=0;
        if(odd%2==1 && sem==num) cout << ar[0]*(num-1) << endl;
        else if(odd%2==1 && sum!=num){
            for(int x=0; x<num; x++){
                if(small_odd!=ar[x]) res+=ar[x];
            }
            cout << res << endl;
        }
        else{
            for(int x=0; x<num; x++){
                res+=ar[x];
            }
            cout << res << endl;
        }
    } 
    else if(eve==num) cout << sum << endl;
    else if(odd%2==0) cout << sum << endl;
    else{
        ll int res=0;
        for(int x=0; x<num; x++){
            if(ar[x]!=small_odd) res+=ar[x];
            else small_odd=-0;
        }

        cout << res << endl;
    }
    return 0;
}