#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[10];
int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int S[11],P;
    S[1] = -b / a;
    P = c / a;
    if (n == 1)
    {
        cout << S[1];
        return 0;
    }
    S[2] = S[1] * S[1] - 2 * P;
    if (n == 2)
    {
        cout << S[2];
        return 0;
    }
    for (int i = 3; i <= n; i++)
        S[i] = S[1] * S[i - 1] - P * S[i - 2];

    cout << S[n];

    return 0;
}