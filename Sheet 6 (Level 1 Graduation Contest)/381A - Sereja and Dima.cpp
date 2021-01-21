//https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, sum = 0, ans1 = 0, ans2 = 0, x, y;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    y = n - 1;
    x = 0;
    while (x < y + 1)
    {
        if (arr[y] >= arr[x] && y >= 0)
        {
            ans1 += arr[y];
            arr[y] = 0;
            y--;
        }
        else if (arr[x] >= arr[y] && x >= 0)
        {
            ans1 += arr[x];
            arr[x] = 0;
            x++;
        }
        if (arr[y] >= arr[x] && y >= 0)
        {
            ans2 += arr[y];
            arr[y] = 0;
            y--;
        }
        else if (arr[x] >= arr[y] && x >= 0)
        {
            ans2 += arr[x];
            arr[x] = 0;
            x++;
        }
    }
    cout << ans1 << " " << ans2 << endl;
}