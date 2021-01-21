//https://codeforces.com/problemset/problem/701/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, x, sum = 0, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sum = sum / (n / 2);
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] != -1 && arr[i] + arr[j] == sum)
            {
                cout << i + 1 << " " << j + 1 << endl;
                arr[j] = -1;
                break;
            }
    return 0;
}
