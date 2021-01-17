//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2113

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
            cout << ">" << endl;
        else if (a < b)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}
