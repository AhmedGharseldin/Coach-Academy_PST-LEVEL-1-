//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2489

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2, A, B;
    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        A = abs(y2 - y1);
        B = abs(x2 - x1);
        if (A == 0 && B == 0)
        {
            if (x1 > 0 || y1 > 0 || x2 > 0 || y2 > 0)
                cout << 0 << endl;
            else
                break;
        }
        else if (A == B && A + B != 0 || A == 0 && B > 0 || B == 0 && A > 0)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
    return 0;
}
