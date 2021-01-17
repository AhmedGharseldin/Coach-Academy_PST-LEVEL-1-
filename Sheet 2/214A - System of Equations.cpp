//https://codeforces.com/problemset/problem/214/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, counter = 0;
    cin >> n >> m;

    for (int a = 0; a <= n; a++)
    {
        for (int b = 0; b <= m; b++)
        {
            if ((a * a) + b == n && a + (b * b) == m)
                counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
