#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    int n;
    std::cin >> n;
    int a[1001];
    for(int i = 1; i <= n; i++)
        std::cin >> a[i];

    for(int p = 1 ; p<=n ; p++)
        for(int k=p-1;k>=1;k--)
            if( a[p] == a[k] )
            {
                for(int i = p ; i<n ; i++)
                a[i] = a[i+1];
                n--;p--;
                break;
                
            }
    for(int i = 1; i <= n; i++)
        std::cout << a[i] << " ";
    return 0;
}