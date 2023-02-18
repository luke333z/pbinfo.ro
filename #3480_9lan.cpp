#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    
    ifstream fin("9lan.in");
    ofstream fout("9lan.out");
    fin>>n;
    if(n%2==0)
    {
        fout<<1;
    }
    else
        fout<<9;
    return 0;
}