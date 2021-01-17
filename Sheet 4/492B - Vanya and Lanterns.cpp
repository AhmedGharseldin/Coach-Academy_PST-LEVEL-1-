//https://codeforces.com/problemset/problem/492/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l;

    cin >> n >> l;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int x = 0, temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        temp = arr[i + 1] - arr[i];
        if (temp > x)
            x = temp;
    }
    double d;
    d = (double)x / 2;
    if ((l - arr[n - 1] > d) && ((l - arr[n - 1]) >= arr[0]))
        d = l - arr[n - 1];
    else if ((arr[0] > d) && (arr[0] >= (l - arr[n - 1])))
        d = arr[0];
    cout << fixed << setprecision(10) << (double)d << endl;
    return 0;
}
