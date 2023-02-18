#include <fstream>
#include <iostream>
using namespace std;
ifstream fin ("pozitiiconsecutive.in");
ofstream fout ("pozitiiconsecutive.out");
int x,y,z;
int main()
{
    fin >> x >> y;
    fout << y << " " << x << " ";
    z=2*x-y+2;
    while (z)
    {
        fout << z<< " ";
        y=x;
        x=z;
        z=2*x-y+2;
    }
    fout <<0;
    return 0;
}