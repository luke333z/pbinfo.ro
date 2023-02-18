#include <iostream>
#include <fstream>
using namespace std;
int a,b;
int main()
{
    ifstream fin("maxim.in");
    ofstream fout("maxim.out");
    fin>>a>>b;
    if(a>b)
    {
        fout<<a;
    }
    else
    {
        fout<<b;
    }
    return 0;
}