#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll T, n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> T;
    while (T-- > 0)
    {
        cin >> n;
        ll cnt0 = 0, cnt1 = 0;
        for (ll i = 0; i < n * 2; i++)
        {
            ll t;
            cin >> t;
            if (t == 0)
                cnt0++;
            else
                cnt1++;
        }
        cout << (cnt0 % 2 + cnt1 % 2) / 2 << " " << min(cnt0, cnt1) << "\n";
    }
    return 0;
}
