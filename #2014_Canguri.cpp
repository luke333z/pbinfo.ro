#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
std::string filename = "canguri";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int nr,s;
    int max=0,nrmax;
    for(int i=1;i<=3;i++)
    {
        in>>nr>>s;
        if(s>max)
            max=s, nrmax=nr;
    }
    out<<nrmax<<std::endl;
    int rez=800/max;
    if(rez*max!=800)
        rez++;
    out<<rez;
    return 0;    
}