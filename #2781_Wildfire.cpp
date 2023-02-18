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
    int x,y,n,m;
    cin>>x>>y>>n>>m;
    int lc1=x+y-2;
    int lc2=x-1+m-y;
    int lc3=y-1+n-x;
    int lc4=m-y+n-x;
    cout<<max(max(max(lc1,lc2),lc3),lc4)+1;
    return 0;
}