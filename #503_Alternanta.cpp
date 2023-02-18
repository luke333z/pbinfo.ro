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
    int v[1001]={0},n;
    cin>>n;bool ok=1;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]==1 && v[i-1]==1)
            {
                cout<<"NU"; return 0;
            }
    }
    
   
    
        cout<<"DA";
   
    return 0;
}