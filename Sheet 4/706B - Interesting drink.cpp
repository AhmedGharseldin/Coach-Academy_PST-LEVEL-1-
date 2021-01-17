//https://codeforces.com/problemset/problem/706/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n;
    int shops[n];
    for (int i = 0; i < n; i++)
        cin >> shops[i];
    sort(shops, shops + n);
    cin >> q;
    int key, drinks[q] = {0}, low, high, mid;
    for (int i = 0; i < q; i++)
    {
        cin >> key;
        low = 0, high = n - 1;
        //        binary search
        while (low <= high)
        {
            mid = low + ((high - low) / 2);
            if (key >= shops[mid])
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }

        drinks[i] = low;
    }
    for (int i = 0; i < q; i++)
        cout << drinks[i] << endl;
    return 0;
}
