#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,a[201],maxx=-1,pos=0,x,s;std::cin>>n;
    for(int i=1; i<=n; i++)
    {
        std::cin>>x;
        s=0;
        while(x)
        {
           
            s+=x%10;
            x/=10;
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