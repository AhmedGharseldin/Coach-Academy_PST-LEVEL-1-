//https://codeforces.com/problemset/problem/479/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, s[4];

    cin >> a >> b >> c;
    s[0] = a * b * c;
    s[1] = (a + b) * c;
    s[2] = a * (b + c);
    s[3] = a + b + c;
    sort(s, s + 4);

    cout << s[3] << endl;
    return 0;
}