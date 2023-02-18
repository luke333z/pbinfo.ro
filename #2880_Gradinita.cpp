#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "gradinita";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
bool prime(int n)
{
    if(n<2)
        return false;
    for(int d=2;d*d<=n;d++)
        if(n%d==0)
            return false;
    return true;
}
bool prime2(int n)
{
    int aux=n,cnt=0,sum=0;
    while(aux)
    {
        aux/=10;
        cnt++;
    }
    if(cnt%2==0)
        n/=10;
    while(n)
    {
        sum+=n%10;
        n/=100;
    }
    return prime(sum);
}

int main ()
{
    int n,k,aux,v[100001],x,aux1=1;
    in>>n>>k;
    aux=n;
    for(int i=1;i<=n;i++)
    {
        in>>x;
        if(prime(x))
            aux--;
        else if(prime2(x))
            aux--;
        else
            v[aux1++]=x;
    }
    bool ok=false;
    for(int i=1;i<=aux1;i++)
        if(i%k!=0 && v[i]!=0)
            out<<v[i]<<' ',ok=true;
    if(!ok)
        out<<"Toti copiii sunt obraznici!";

    
    
    return 0;
    
}