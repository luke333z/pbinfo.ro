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

    int n;
    char a,b;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
        cout<<a;
    cout<<'\n';
    for(int i=2;i<n;i++)
        { 
            cout<<a;
            for(int j=2;j<n;j++)
                cout<<b;
            cout<<a;
            cout<<'\n';
        }
    for(int i=1;i<=n;i++)
        cout<<a;
    return 0;
}