//https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] == 'T')
            sum += 4;
        if (s[0] == 'C')
            sum += 6;
        if (s[0] == 'O')
            sum += 8;
        if (s[0] == 'D')
            sum += 12;
        if (s[0] == 'I')
            sum += 20;
    }
    cout << sum << endl;

    return 0;
}