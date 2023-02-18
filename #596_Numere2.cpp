#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "numere2";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int v[25005],n,cnt=0;
    v[0]=0;in>>n;
    
    
    for(int i=1;i<=n;i++)
    {
        in>>v[i];
        if(v[i]==v[i-1])
        {
            i-=2;
            cnt++;
            n-=2;
        }
    }
    out<<cnt<<'\n';
    for(int i=1;i<=n;i++)
        out<<v[i]<<' ';
    return 0;
}