#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    int n,x,p;
    std::cin >> n;
    int a[1001];
    for(int i = 1; i <= n; i++)
        std::cin >> a[i];

    for(int p=n;p>=1;p--)
        if(a[p]%2==0)
        {
            int x=a[p]*2;
            for(int i = n  ; i >= p ; i --)
                a[i+1] = a[i];
            a[p+1] = x;
            n++;
        }

    
    for(int i = 1; i <= n; i++)
        std::cout << a[i] << " ";
    return 0;
}

