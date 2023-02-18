#include <iostream>

using namespace std;

int main()

{

    int a,b;
    cin>>a>>b;
    if(a+b<=100)
       cout<<0;
    else 
       cout<<a-(100-b);
   return 0;

}