#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int n,sum_pare=0,sum_pos_pare=0,cnt_10=0,sum_3=0;std::cin>>n;
    int a[101];
    for(int i=1; i<=n; i++)
    {
        std::cin>>a[i];
        if(a[i]%2==0)
            sum_pare+=a[i];
        if(a[i]%10==0)
            cnt_10++;
        if(i%2==0)
            sum_pos_pare+=a[i];
        else if(a[i]%3==0)
            sum_3+=a[i];
    }
        
    for(int i=n;i>=1;i--)
    {
        std::cout<<a[i]<<' ';
    }    
    std::cout<<'\n'<<sum_pare<<'\n'<<sum_pos_pare<<'\n'<<cnt_10<<'\n'<<sum_3;
    return 0;
}