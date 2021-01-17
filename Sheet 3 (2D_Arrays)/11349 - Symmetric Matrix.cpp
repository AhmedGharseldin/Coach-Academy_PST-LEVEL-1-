//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2324

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, test_Case = 1;
    char c;
    cin >> t;
    while (t > 0)
    {
        t--;
        int counter = 1;
        cin >> c >> c >> n;
        double arr[n][n], arrtranspose[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
        // finding transpose of arr
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                arrtranspose[i][j] = arr[n - i - 1][n - j - 1];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (arrtranspose[i][j] != arr[i][j] || arr[i][j] < 0)
                    counter = 0;

        if (counter)
            cout << "Test #" << test_Case << ": Symmetric." << endl;
        else
            cout << "Test #" << test_Case << ": Non-symmetric." << endl;
        test_Case++;
    }
    return 0;
}