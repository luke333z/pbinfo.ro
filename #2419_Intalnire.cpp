#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main ()
{
    int a,b;
    std::cin>>a>>b;
    if(a>b)
        std::swap(a,b);
    bool ok=1;
    int cnt=0;
    for(int i=1;ok;i++)
    {
        if(a!=b)
        {
            a++;
            cnt+=i;
            if(a==b)
                ok=0;
            else
                b--,cnt+=i;
        }
        else
            ok=0;
    }
    std::cout<<cnt;
    return 0;
}