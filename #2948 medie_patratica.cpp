#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

using namespace std;

int main()
{
    double n,x,s=0;
    cin>>n;
    for( int i=1; i<=n;i++)
    {
        cin>>x;
        s=s+x*x;
    }
    
    cout<<fixed<<setprecision(2)<<sqrt(s/n);
    return 0;
}