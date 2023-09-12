#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    char inpo = 'a';
    int count = 0;
    for (int i = 0; i < s.size(); i++){
        int ans = min(abs(inpo-s[i]),26-(abs(inpo-s[i])));
        inpo = s[i];
        count+=ans;
    }

    cout << count << endl;
    
}