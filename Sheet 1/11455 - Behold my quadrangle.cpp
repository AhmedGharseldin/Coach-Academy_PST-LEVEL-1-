//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2450

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        if ((a + b + c) > d && (b + c + d) > a && (c + d + a) > b && (d + a + b) > c)
        {
            if (a == b && b == c && c == d)
                cout << "square" << endl;
            else if ((a == c && b == d) || (a == b && c == d) || (a == d && b == c))
                cout << "rectangle" << endl;
            else
                cout << "quadrangle" << endl;
        }
        else
            cout << "banana" << endl;
    }
    return 0;
}
