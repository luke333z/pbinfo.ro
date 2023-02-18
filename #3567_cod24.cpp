#include <bits/stdc++.h>

using namespace std;
ifstream fin("cod24.in");
ofstream fout("cod24.out");


int main()
{
    int n;
    fin>>n;
    int a=n/1000,b=n/100%10,c=n/10%10, d=n%10;
    if(a!=9) a++;
    if(b!=9) b++;
    if(c!=9) c++;
    if(d!=9) d++;
    fout<<a<<b<<d<<c;

    return 0;
}