#include <iostream>
using namespace std;
long long int n, x, i, d, s, ok;
int main()
{
  cin>>n;
  s=0;
  ok=1;
  for (i=1; i<=n; i++)
  {
      cin>>x;
      ok=1;
      if (x<2)
        ok=0;
      for (d=2; d*d<=x && ok; d++)
      {
          if(x%d==0)
          {
              ok=0;
                if(d*d<x)
                    ok=0;
          }


      }
          if (ok==1)
            s=s+x;
  }
    cout<<s;


    return 0;
}