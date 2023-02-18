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
    int v[1001],n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    bool ok=1;
    for(int i=1;i<=n;i++)
        {
            if(v[i]%v[n]!=0)
                ok=0;
            
        }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}