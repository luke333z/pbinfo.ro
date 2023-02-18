#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
string filename = "pozmax";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[10];
int main()
{
    int n;
    in>>n;
    float tmp;
    int p=0,u=0,max=0;
    for (int i=1;i<=n;i++)
    {
        in>>tmp;
        if(tmp>max)
        {
            p=i;
            max=tmp;
        }
        if (tmp==max)
            u=i;
    }
    out<<p<<' '<<u;
    return 0;
}