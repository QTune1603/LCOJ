#include <bits/stdc++.h>
using namespace std;

#define ms(s, n) memset(s, n, sizeof(s))
#define all(a) a.begin(), a.end()
#define sz(a) int((a).size())
#define f0(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define FastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int)1e9 + 7;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    FastIO;
    int n;
    cin >> n;
    int a[n][n];
    int cnt = 1;
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    while (h1 <= h2 && c1 <= c2)
    {
        for (int i = c1; i <= c2; i++)
        {
            a[h1][i] = cnt;
            ++cnt;
        }
        ++h1;
        for (int i = h1; i <= h2; i++)
        {
            a[i][c2] = cnt;
            ++cnt;
        }
        --c2;
        if (h1 <= h2)
        {
            for (int i = c2; i >= c1; i--)
            {
                a[h2][i] = cnt;
                ++cnt;
            }
            --h2;
        }
        if (c1 <= c2)
        {
            for (int i = h2; i >= h1; i--)
            {
                a[i][c1] = cnt;
                ++cnt;
            }
            ++c1;
        }
    }
    f0(i, n)
    {
        f0(j, n) cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}