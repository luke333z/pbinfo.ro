#include <iostream>
#include <cmath>

int main()
{
   double AB, AC, BC, MA, MB, MC, a2, b2, c2;
   std::cin >> AB >> AC >> BC;
   if (AB+AC >= BC and AB+BC >= AC and BC+AC >= AB)
   {
      a2 = BC*BC;
      b2 = AC*AC;
      c2 = AB*AB;
      MA = sqrt(( 2*(c2+b2) - a2 ) / 4);
      MB = sqrt(( 2*(a2+c2) - b2 ) / 4);
      MC = sqrt(( 2*(a2+b2) - c2 ) / 4);

      MA *= 100,  MB *= 100,  MC *= 100;
      std::cout << int(MC) / 100 << '.' << int(MC) / 10 % 10 << int(MC) % 10 << ' ';
      std::cout << int(MB) / 100 << '.' << int(MB) / 10 % 10 << int(MB) % 10 << ' ';
      std::cout << int(MA) / 100 << '.' << int(MA) / 10 % 10 << int(MA) % 10;
      MA /= 100,  MB /= 100,  MC /= 100;
   }
   else
   {
      std::cout << "Imposibil";
   }
   return 0;
}