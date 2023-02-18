#include <iostream>
#include <fstream>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    int n, bank[10000] = {0};
    std::cin>>n;
    for(int i=1; i<=n;i++)
    {
        int x; std::cin>>x;
        if(x<=999 && x>=100)
            bank[x]=1;
    }
    int a,b,ok=0;
    for(int i=999;i>=100; i--)
    {
            if(!bank[i])
            {
                ok++;
                if(ok==1)
                    a=i;
                if(ok==2)
                {
                    std::cout<<i<<' '<<a;
                    return 0;
                }
                
            }
    }
    std::cout<<"NU EXISTA";
   
    return 0;
}