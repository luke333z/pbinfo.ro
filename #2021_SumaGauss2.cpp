#include <bits/stdc++.h>
using namespace std;
ifstream fin("sumagauss2.in");
ofstream fout("sumagauss2.out");
int main()
{
    long long s , sq , aux , n , m , d , s2;
    fin >> s;
    s2 = s * 2;
    for(d = 1; d * d <= s2; d++)
    {
        if(s2 % d == 0)
        {
            aux = d + s2 / d - 1;
            if(aux % 2 == 0)
            {
                n = aux / 2;
                m = n - d;
                fout << n <<" " << m <<endl;;
            }
        }
    }
    return 0;
}