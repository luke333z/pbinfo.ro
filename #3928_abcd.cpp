#include <iostream>
#include <fstream>

int main() 
{
    int a, b, c, d;
    std::cin>>a>>b>>c>>d;
    if(a%3)
        a=a+3-a%3;
    b=b-b%3;
    if(c%3)
        c=c+3-c%3;
    d=d-d%3;

    std::cout<<((b-a) /3 + 1) + ((d-c) /3 + 1);;
    return 0;
}