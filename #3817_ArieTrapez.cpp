#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
   double a, b, c, d, A;
   std::cin >> a >> b >> c >> d;

   if ((abs(d-b) < abs(c-a) && abs(c-a) < abs(d+b))  ==  false)
   {
      std::cout << "Imposibil";
   }
   else
   {
      A = (a+c) * sqrt(b*b - ((c-a)*(c-a) + b*b - d*d)*((c-a)*(c-a) + b*b - d*d) / 4/(c-a)/(c-a)) / 2;
      A *= 100;
      std::cout << int(A)/100 << '.' << int(A)/10%10 << int(A)%10;
   }
}