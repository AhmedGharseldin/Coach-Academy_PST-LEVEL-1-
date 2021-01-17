//https://codeforces.com/problemset/problem/32/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, c = 0, diff = 0;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            diff = abs(arr[i] - arr[j]);
            if (diff <= d && diff != 0)
                c++;
            if (arr[i] == arr[j])
                c++;
        }
    }
    cout << c + c << endl;
    return 0;
}
