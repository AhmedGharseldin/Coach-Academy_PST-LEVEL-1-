//https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[100], mx = 0, mn = 1000, mxi = 0, mni = 0, c = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            mxi = i;
        }
        if (arr[i] <= mn)
        {
            mn = arr[i];
            mni = i;
        }
    }
    if (mxi > mni)
        c = (mxi - 1) + (n - mni) - 1;
    else
        c = (mxi - 1) + (n - mni);
    cout << c << endl;
    return 0;
}
