///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///

#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"

using namespace std;
int main()
{
    ios_base::sync_with_stdio(true);

    ll n, q;
    cin >> n >> q;

    ll a[n + 1], b[q + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++) // 10^5
    {
        cin >> b[i];

        ll target, l, r, f = 0, index;

        target = b[i];
        l = 0;
        r = n - 1;

        while (l <= r && target <= a[r] && target >= a[l]) // 17
        {
            ll mid = (l + r) / 2;
            if (a[mid] == target)
            {
                f = 1;
                index = mid;
                r = mid - 1;
            }
            else if (a[mid] > target)
            {
                r = mid - 1;
            }
            else if (a[mid] < target)
            {
                l = mid + 1;
            }
        }

        if (f == 0)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << index << nl;
        }
    }
}