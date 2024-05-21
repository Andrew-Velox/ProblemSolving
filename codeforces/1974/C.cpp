#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define unq(v) v.erase(unique(v.begin(),v.end()),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define endl '\n'
#define fx(x) fixed<<setprecision(x)


void solve(){
    ll n;
	ll a, b, c;
	ll ans = 0;
	map<tuple<ll, ll, ll>, ll> p;
	cin >> n >> a >> b;
	for (int x = 2; x < n; x++) {
		cin >> c;
		ans += p[{-1, b, c}]++;
		ans += p[{a, -1, c}]++;
		ans += p[{a, b, -1}]++;
		ans -= 3 * p[{a, b, c}]++;
		a = b;
        b = c;
	}
	cout << ans << endl;

}

int main(){
    // error_txt();
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}