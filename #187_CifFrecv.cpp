#include <bits/stdc++.h>

using namespace std;

ifstream in("ciffrecv.in");
ofstream out("ciffrecv.out");

int main()
{
    int max = 0, nrap = 0;
    int x;
    while(in >> x){
        if(x == 2 && x > max)
            max = x, nrap = 0;
        if(x == 3 && x > max)
            max = x, nrap = 0;
        if(x == 5 && x > max)
            max = x, nrap = 0;
        if(x == 7 && x > max)
            max = x, nrap = 0;
        if(x == max)
            nrap++;
    }

    out << max << ' ' << nrap;
}