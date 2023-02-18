#include <iostream>

using namespace std;
int n,d,i,x,cnt,divv;
int main()
{
    cin >> n;
    cnt=divv=0;
    for (i=1;i<=n;i++)
    {
        cin >> x;
        divv=0;
        for (d=1;d*d<=x;d++)
            if(x%d==0)
            {
                divv++;
                if(d*d<x)
                    divv++;
            }
        if (divv==2)
            while (x)
            {
                x=x/10;
                cnt++;
            }
    }
    cout << cnt;
    return 0;
}