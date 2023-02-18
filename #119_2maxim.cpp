#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int main ()
{
    int n;
    cin>>n;
    int a[1001];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<a[n-1]<<' '<<a[n-2];
    return 0;
}