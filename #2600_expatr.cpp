#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int a,b;
cin>>a;
b=3*(pow(a,2)+pow(a,4))/(pow(a,2)+pow(a,4)+sqrt(pow(a,2)+pow(a,4)))+sqrt(pow(a,2)+pow(a,4));
cout<<b;
return 0;
}