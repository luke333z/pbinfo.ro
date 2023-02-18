#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in("datapal.in");
std::ofstream out("datapal.out");

bool verifyPal(int n)
{
    int aux=n,pal=0;
    while(n)
    {
        pal=pal*10+n%10;
        n/=10;
    }
    return (aux==pal);

}
int main ()
{
    int n,v[101]={0},x,cen,year,cnt=0;
    char pal[10],aux[10];
    bool ok;
    in>>n;

    for(int i=1;i<=n;i++)
    {
        ok=true, year=0;
        for(int j=1;j<=8;j++)
        {
            in>>aux[j];
            pal[9-j]=aux[j];
            if(j>=4)
                year=year*10+(aux[j]-'0');
        }
        for(int j=1;j<=8;j++)
            if(aux[j]!=pal[j])
                ok=false;
        if(ok)
        {
            cnt++;
            year%=10000;
            cen=year/100;
            if(year%100!=0)
                cen++;
            v[cen]++;
        }
    }
        out<<cnt<<'\n';
    int maxx=0;
    for(int i=1;i<=100;i++)
        if(v[i]>maxx)
            maxx=v[i];
    for(int i=1;i<=100;i++)
        if(v[i]==maxx)
            out<<i<<' ';
    return 0;

}