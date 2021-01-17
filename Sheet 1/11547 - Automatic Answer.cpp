//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2542

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        cin >> a;
        sum = (((((a * 567) / 9) + 7492) * 235) / 47) - 498;
        cout << abs(sum % 100) / 10 << endl;
    }
    return 0;
}
