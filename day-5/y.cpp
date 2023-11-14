#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
   ll n;
    cin >> n;
   ll s;
    cin >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    

    ll sum = 0;
   ll count = 0;
    map<ll,ll> mp;

    for (ll i = 0; i < n; i++) {
        sum += a[i];

        if (sum == s) {
            count++;
        }

        if (mp.find(sum - s) != mp.end()) {
            count += mp[sum - s];
        }

        mp[sum]++;
    }

    cout << count << endl;

    return 0;
}
