#include <iostream>
using namespace std;
  int main()
  {
    int n,m;
    cin>>n;

    m=n;
    while(m>0)
    {
        if(m%2==1)
        {
        cout<<m<<" ";
        }
        m--;
    }
    return 0;
  }