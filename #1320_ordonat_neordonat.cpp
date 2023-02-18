#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n, x,a[1001],cnt=0;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        std::cin>>a[i];
    }
     for(int i = 1 ; i <= n ; ++i)
    {
        a[0]=a[1];
        if(a[i]==a[i-1])
            cnt++;
    }
    if(cnt==n)
       std::cout << "sir constant";
    else
    {
        cnt=0;
        a[0]=-1;
    for(int i = 1 ; i <= n ; ++i)
    {
        if(a[i]>a[i-1])
        cnt++;
    }
    if(cnt==n)
    std::cout << "sir strict crescator";
    else
    {
        cnt=0;
        for(int i = 1 ; i <= n ; ++i)
        if(a[i]>=a[i-1])
        cnt++;
        if(cnt==n)
        std::cout << "sir crescator";
        else
        {
            cnt=0;
            for(int i = 1 ; i <= n ; ++i)
            {
                a[0]=1000000001;
                if(a[i]<a[i-1])
                cnt++;
            }
            if(cnt==n)
            std::cout << "sir strict descrescator";
            else
            {
                cnt=0;
                for(int i = 1 ; i <= n ; ++i) 
                if(a[i]<=a[i-1])
                cnt++;
                if(cnt==n)
                std::cout << "sir descrescator";
                else
                std::cout << "sir neordonat";
            }
        }
    }
    }
   
    return 0;
}