//https://codeforces.com/problemset/problem/233/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, P[100] = {};
    cin >> n;
    if (n % 2 == 1)
        cout << -1 << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            i % 2 == 1 ? P[i] = i + 1 : P[i] = i - 1;
            cout << P[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
