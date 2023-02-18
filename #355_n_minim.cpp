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
int main()
{
    int n,maxim=INT_MAX,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        maxim=min(maxim,x);
    }
    cout<<maxim;
    return 0;   
}