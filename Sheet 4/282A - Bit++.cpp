//https://codeforces.com/problemset/problem/282/A

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    string c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == "++X" || c == "X++")
            count++;
        if (c == "--X" || c == "X--")
            count--;
    }
    cout << count << endl;
    return 0;
}