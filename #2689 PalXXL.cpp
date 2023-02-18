#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <climits>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
using namespace std;
int main ()
{
    int v[1001],b[1001],n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        b[n+1-i]=v[i];
    }
    bool ok=1;
    for(int i=1;i<=n;i++)
        {
            if(v[i]!=b[i])
                ok=0;
            cout<<v[i];
        }
    if(ok)
        cout<<'\n'<<"DA";
    else
        cout<<'\n'<<"NU";
    return 0;
}