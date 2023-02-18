#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int z,x;
    fstream fin("sum.in");
    ofstream fout("sum.out");
    fin>>x>>z;
    fout<<x+z;
    return 0;
}