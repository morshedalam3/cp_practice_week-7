/****************Bis'Millah Hir Rah'Manir Rahim ***************
*                    Author: Morshed Alam                     *
*                       SyntaxSorcerer                        *
***************************************************************
*/
#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long int
#define endl "\n"

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll eps = -1e9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

int32_t main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {


        int n;
        cin >> n;

        int m = (n * (n - 1)) / 2;

        vector<int> b(m);
        unordered_map<int, int> mp;

        for (auto &itr : b)
        {
            cin >> itr;
            ++mp[itr];
        }

        sort(b.begin(), b.end());

        vector<int> v;

        int curr = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            v.push_back(b[curr]);
            curr += n - 1 - i;
        }
        v.push_back(1e9);
        for (auto itr : v)
            cout
                << itr << ' ';
        cout << endl;
    }
    return 0;
}