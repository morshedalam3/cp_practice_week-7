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

        vector<vector<int>> v(n);

        vector<int> first, second;

        for (int i = 0; i < n; ++i)
        {
            int m;
            cin >> m;
            vector<int> cur;
            for (int j = 0; j < m; ++j)
            {
                int key;
                cin >> key;
                cur.push_back(key);
            }
            sort(cur.begin(), cur.end());
            first.push_back(cur[0]);
            second.push_back(cur[1]);
        }

        int ans = 0;

        sort(first.begin(), first.end());
        sort(second.begin(), second.end());

        for (int i = 1; i < second.size(); ++i)
            ans += second[i];

        cout << ans + first[0] << endl;
    }
    return 0;
}