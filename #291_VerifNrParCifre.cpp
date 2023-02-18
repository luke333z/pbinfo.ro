#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n, x,cnt=0;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        std::cin>>x;
        cnt=0;
        while(x)
        {
            x/=10;
            cnt++;
        }
        if(cnt%2==1)
        {
            std::cout<<"NU";
            return 0;
        }
    }
    std::cout<<"DA";
    return 0;
}