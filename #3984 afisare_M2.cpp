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
    int a,n;
    cin>>a>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<a*i<<' ';
       
    }
    return 0;
}