#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "cartonase1";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int cmmdc(int n, int m)
{
    while(m != 0)
    {
        int r = n % m;
        n = m;
        m = r;
    }
    return n;
}


int main ()
{
    int n,x,d,aux;
    in>>n>>aux;
    for(int i=2;i<=n;i++)
    {
        in>>x;
        aux=cmmdc(x,aux);
        if(aux==1)
        {
            out<<i;
            return 0;
        }
    }
    out<<-1;
    return 0;
    
}