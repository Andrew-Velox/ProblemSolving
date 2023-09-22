#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int num;
    cin >> num;
    num++;
    string s=to_string(num);
    
    int ans=num,n=1,cnt=0;
    while(n>0){
        for(int x=0; x<s.size(); x++){
            for(int y=x+1; y<s.size(); y++){
            if(s[x]==s[y]) {
                cnt++;
                }
            }               
        }
        
        if(cnt>0){
            ans=num++;
            s=to_string(ans);
            n=1;
        }
        else n=0;     
        cnt=0;
   }
   
   cout << ans << endl;
    
    return 0;
}