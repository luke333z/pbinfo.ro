#include <iostream>
#include <fstream>
#include <cmath>
#include <bitset>
#include <cstring>
#include <iomanip>
#include <algorithm>
using namespace std;

string  nume = "date";

ifstream fin(nume + ".in");
ofstream fout(nume + ".out");

typedef unsigned long long ull;
typedef long long ll;

int main()
{
    int s = 0;
    int n, var;
    cin >> n >> var;
    for (int i = 1; i <= n; i++)
    {
        cin >> var;
        if (var > 9 && var < 100)
            s += var;
    }
    cout << s;
}