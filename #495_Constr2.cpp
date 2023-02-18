#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,med,s=0,x,a[10001],cnt;std::cin>>n;
    for(int i=1; i<=n; i++)
    {
        std::cin>>a[i];
    }
    for(int i=n;i>=1;i--)
    {     
        int ndiv = 0;
        x=a[i];
        for(int d =1 ; d * d <= x ; d ++ )
            if(x % d == 0)
            {
                ndiv++;
                if(d * d < x) 
                    ndiv++;
            }
        if(ndiv == 2) 
            std::cout << a[i]<<' ';
    }
    
    return 0;
}