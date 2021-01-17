//https://codeforces.com/problemset/problem/460/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, c = 0, k = 0;

    cin >> n >> m;

    while (n)
    {
        n--;
        c++;
        if (c % m == 0)
            n++;
    }
    cout << c << endl;
    return 0;
}