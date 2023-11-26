#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fx(x) fixed<<setprecision(x)
using namespace std;
//ALHAMDULILLAH
void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve(){
    int len; cin >> len;
    int pos; cin >> pos;

    vector<int> vi(len);
    for(int x=0; x<len; x++) cin >> vi[x];

    if(len==pos){
        int cnt=0;
        for(int x=0; x<len; x++){
            if(vi[x]==1) cnt++;
        }

        cout << cnt << endl;
        return;
    }

    int cnt=0;
    if(vi[pos-1]==1) cnt++;

    int i=pos-2,j=pos;
    int i_end=0,j_end=0;
    
    if(i<0) i_end=1;
    else if(j>len-1) j_end=1;

    while(i>=0 || j<len){

        if(vi[i]==1 && vi[j]==1 && i_end==0 && j_end==0) cnt+=2;
        else if(vi[i]==1 && j_end==1) cnt++;
        else if(vi[j]==1 && i_end==1) cnt++;

        i--;
        j++;
        if(i<0) i_end=1;
        if(j==len) j_end=1;
    }

    cout << cnt << endl;
    
}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}