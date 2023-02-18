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
    int n,k;
    cin>>n>>k;
    cout<<n;
    for(int i=1;i<=k;i++)
        cout<<0;
    return 0;
}