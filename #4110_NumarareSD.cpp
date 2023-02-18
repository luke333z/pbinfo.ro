#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,a[1001],maxx=-1,pos=0,x,s;std::cin>>n;
    for(int i=1; i<=n; i++)
    {
        std::cin>>x;
        s=0;
         for(int d =1 ; d * d <= x ; d ++ )
        if(x % d == 0)
        {
            s+=d;
            if(d * d < x) 
                s+=x/d;
        }
        a[i]=s;
    }
        
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j ++)
            if(a[i]==a[j])
                pos++;
    std::cout<<pos;
    return 0;
}