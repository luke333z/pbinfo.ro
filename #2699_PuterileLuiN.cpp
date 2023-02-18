#include <iostream>


int main()
{
    long long n,p,s=1; std::cin>>n>>p;
    for(long long int i = 1 ; i <= p ; i *= n)
        std::cout << i << ' ';
}