#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,med,s=0,x,a[10001],aux;std::cin>>n;
    aux=n;
    for(int i=1; i<=n; i++)
    {
        std::cin>>a[i];
        if(a[i]==0)
            aux--;
        s+=a[i];
    }
    med=s/aux;
    for(int i=1;i<=n;i++)
    {       
        if(a[i]==0)
           a[i]=med;
        std::cout<<a[i]<<' ';
    }
    
    return 0;
}