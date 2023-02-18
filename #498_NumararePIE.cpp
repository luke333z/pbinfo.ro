#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,a[201],maxx=-1,pos=0,x,y,r,s;std::cin>>n;
    for(int i=1; i<=n; i++)
    {
        std::cin>>a[i];
        
    }
        
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j ++)
        {
            x=a[i];
            y=a[j];
            while(y!=0)
            {
                r=x%y;
                x=y;
                y=r;
                
            }
            if(x==1)pos++;
    
        }
    std::cout<<pos;
    return 0;
}