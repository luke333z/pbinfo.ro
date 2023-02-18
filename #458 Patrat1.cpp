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

    int n,j=0;
    char a,b;
    cin>>n>>a>>b;
    for(int i=1;i<=n*n;i++)
    {
        j++;
        if(j>n)
            {cout<<'\n';j-=n;}
        if(i%2==1)
            cout<<a;
        else
            cout<<b;
    }
    return 0;
}