#include <iostream>

using namespace std;

int main()
{
   long long x;
   cin>>x;
   if(x%2==0)
   {
       cout<<x+2<<" "<<x+4;
   }
   else
   {
       cout<<x+1<<" "<<x+3;
   }
    return 0;
}