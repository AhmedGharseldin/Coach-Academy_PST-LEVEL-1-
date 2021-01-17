//https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w, c = 1, sum = 0;

    cin >> k >> n >> w;
    for (int i = 0; i < w; i++)
    {
        sum += c * k;
        c++;
    }
    if (sum > n)
        cout << sum - n << endl;
    else
        cout << 0 << endl;
    return 0;
}
