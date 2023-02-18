#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;
string filename = "maximpar";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int main ()
{
    int n,x,cnt=0,nmax=0;
    in>>n;
    for(int i=1; i<=n ;i++)
    {
        in>>x;
        if(x%2==0)
       { if (x>nmax) 
        {
            nmax=x;
            cnt=1;
        }
        else if(x==nmax) 
            cnt++;}
    }
    if(cnt==0)
    {out<<-1;return 0;}
    out << nmax<< ' '<<cnt;
    return 0;
}