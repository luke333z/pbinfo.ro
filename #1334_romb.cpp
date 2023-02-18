#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   float d1,d2;
   cin>>d1>>d2;
   float a,l,p,c1,c2;
   a=d1*d2/2;
   c1=d1/2;
   c2=d2/2;
   float i;
   i=c1*c1+c2*c2;
   l=sqrt(i);
   p=l*4;
   cout<<p<<" "<<a;
    return 0;
}