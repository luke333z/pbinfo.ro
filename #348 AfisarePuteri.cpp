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
    int n,p,s=1; 
    cin>>n>>p;
    while(s<=p)
    {
        cout<<s<<' ';
        s*=n;
    }
}