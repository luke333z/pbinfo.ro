#include <iostream>

using namespace std;
int n,i,cx,x[101],ok,c,nr;
int main()
{
    cin >> n;
    ok=1;
    for (i=1; i<=n; i++)
    {
        cin >> x[i];
        for (c=0; c<=9; c++) //verific pt toate nr de la 0 la 9
        {
            nr=0;
            cx=x[i]; //le ia pe rand
            while (cx)
            {
                if (cx%10==c)
                    nr++;//deci nu e distinc
                cx=cx/10;
            }
            if (nr>1)//nu e distinct
                ok=0;
        }
    }


    if (ok)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}