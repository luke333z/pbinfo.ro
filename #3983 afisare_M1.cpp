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
    cin>>n>>a;
    for(int i=n;i>=1;i--)
    {
        cout<<a*i<<' ';
       
    }
    return 0;
}