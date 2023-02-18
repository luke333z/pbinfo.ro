#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,a[201],maxx=-1,pos=0,x,y,r,i,j,s;std::cin>>n;
    for(int k=1; k<=n; k++)
    {
        std::cin>>a[k];
        
    }
        i=1;j=n;
    while(i<=j)
   {         x=a[i];
            y=a[j];
            while(y!=0)
            {
                r=x%y;
                x=y;
                y=r;
                
            }
            if(x==1)pos++;
        j--;i++;
        }
    std::cout<<pos;
    return 0;
}