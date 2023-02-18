#include <iostream>

using namespace std;

int main()
{
   int x;
   cin>>x;
   if(x%2==0)
   {
       cout<<x-3<<" "<<x-1;
   }
   else
   {
       cout<<x-4<<" "<<x-2;
   }
    return 0;
}