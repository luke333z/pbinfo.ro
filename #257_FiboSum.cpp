#include <iostream>
#include <fstream>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int fib(int n)
{
    int f1 = 1, f2 = 1, f3 ;
    while(f1 + f2 <= n)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f2;
}
int main()
{
    int n;
    std::cin>>n;
    while(n!=0)
    {
        std::cout<<fib(n)<<" ";
        n=n-fib(n);
    }
    return 0;
}