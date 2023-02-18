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
    int s,a,b;
    cin>>s;
    b=s-1;
    a=1;
    while(a<=b)
    {
        cout<<a<<' '<<b<<'\n';
        a++;b--;
    }
    return 0;
}