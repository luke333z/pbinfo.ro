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
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        cout<<i*2-1<<' ';
       
    }
    return 0;
}