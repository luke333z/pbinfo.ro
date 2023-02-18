#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "numere7";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main ()
{
    int a,b,v[25],k=0,cnt=0;
    in>>a>>b;
    if(a==0)
        cnt++;
    if(b==0)
        cnt++;
    while(a)
    {
        if(a%10==0)
            cnt++,a/=10;
        else
        {k++;
        v[k]=a%10;
        a/=10;}
    }
    while(b)
    {
        if(b%10==0)
        cnt++,b/=10;
        else
        {k++;
        v[k]=b%10;
        b/=10;}
    }
    for(int i=1;i<k;i++)
        for(int j=i+1;j<=k;j++)
            if(v[i]>v[j])
                std::swap(v[i],v[j]);
    if(k==0)
        out<<0;
    for(int i=1;i<=k;i++)
        {out<<v[i];
        if(i==1)
            for(int j=1;j<=cnt;j++)
            out<<0;}

    return 0;
    
}