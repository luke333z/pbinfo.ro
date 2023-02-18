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
    int n,x,cnt=0,nmax=0;
    cin>>n;
    for(int i=1; i<=n ;i++)
    {
        cin>>x;
        if (x>nmax) 
        {
            nmax=x;
            cnt=1;
        }
        else if(x==nmax) 
            cnt++;
    }
    cout << nmax<< ' '<<cnt;
    return 0;
}