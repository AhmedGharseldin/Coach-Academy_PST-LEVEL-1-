//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=36

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, counter, n, mx = 0;
    while (cin >> a >> b)
    {
        cout << a << " " << b << " ";
        if (a > b)
        {
            a = b + a;
            b = a - b;
            a = a - b;
        }
        mx = 0;
        for (int i = a; i <= b; i++)
        {
            n = i;
            counter = 0;
            while (1)
            {
                counter++;
                if (n == 1)
                    break;
                else if (n % 2 == 1)
                    n = 3 * n + 1;
                else
                    n = n / 2;
            }
            if (counter > mx)
                mx = counter;
        }
        cout << mx << endl;
    }
    return 0;
}
