#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
   long long int n, c, r, m;
   std::cin>>n>>c>>r;
   m=n/c*c;
   if(m+r>n) 
        std::cout<<m+r;
   else 
        std::cout <<m+c+r;
   return 0;
}