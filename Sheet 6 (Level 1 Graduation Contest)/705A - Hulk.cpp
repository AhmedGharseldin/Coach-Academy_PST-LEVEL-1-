//https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, index = 1;
    string h = "I hate ", l = "I love ", it = "it", that = "that ";
    cin >> n;
    while (index <= n)
    {
        if (index % 2 == 1)
            cout << h;
        else
            cout << l;
        if (index < n)
        {
            cout << that;
        }
        index++;
    }
    cout << it << endl;
    return 0;
}
