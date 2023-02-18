#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
string filename = "minimdoua";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[201];
int main()
{
     int n, j=0 , cnt=0;
    in >> n;
    int a[201];
    int v[201];
    for (int i = 0 ; i < n; ++i)
    {
        in >> a[i];
        if (a[i]%10 == (a[i]/10)%10 && a[i]>9)
        {
            v[j]=a[i];
            j++;
            cnt++;
        }
    }
    sort(v,v+cnt);
    if (cnt>=2)
    out << v[0] << ' ' << v[1];
    else
    out << "numere insuficiente";
    return 0;
}