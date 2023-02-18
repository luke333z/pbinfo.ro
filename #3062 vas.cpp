#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int main()
{
    int x,t,y;
    cin>>x>>t>>y;
    long long rez = 0;
    while(x>y)
    {
        x=x-(x/4);
        rez+=t;
    }
    cout<<rez;
    return 0;   
}