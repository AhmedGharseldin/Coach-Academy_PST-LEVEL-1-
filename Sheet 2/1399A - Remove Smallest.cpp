//https://codeforces.com/problemset/problem/1399/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, d, c = 0, diff = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int arr[n], index = n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                diff = abs(arr[i] - arr[j]);
                if (diff <= 1)
                {
                    index--;
                    j = 0;
                }
            }
        }
        index == 1 || n == 1 ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
