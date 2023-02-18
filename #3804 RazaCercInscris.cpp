#include <iostream>
#include <cmath>

int main()
{
   double a, b, c, p, r; 
   std::cin >> a >> b >> c;
   if (a+b >= c && a+c >= b && b+c >= a)
   {
      p = (a+b+c) /2;
      r = sqrt(p*(p-a)*(p-b)*(p-c)) / p;
      r *= 100;
      if (int(r) % 10 == 0)
      {
         if (int(r) / 10 % 10 == 0)
            std::cout << int(r) / 100 << ".00";
         else
            std::cout << int(r) / 100 << '.' << int(r) / 10 % 10 << 0;
      }
      else
         std::cout << int(r) / 100 << '.' << int(r) / 10 % 10 << int(r) % 10;
   }
   else
   {
      std::cout << "Imposibil";
   }
   return 0;
}