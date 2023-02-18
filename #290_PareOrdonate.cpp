#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n, x,v[101],j=0;
    v[0]=-10002;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        std::cin>>x;
        if(x%2==0)
        {
            j++;
            v[j]=x;
        }
    }
    for(int i=1;i<=j;i++)
    {
        if(v[i-1]>v[i])
        {
            std::cout<<"NU";
            return 0;
        }
    }
    std::cout<<"DA";
    return 0;
}