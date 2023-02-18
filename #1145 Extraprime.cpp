#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
std::string filename = "extraprime";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
bool sieve[10000001];
void generateSieve(int n)
{
    sieve[0]=sieve[1]=1;
    for(int i=2;i*i<=n;i++)
    if(sieve[i]==0)
        for(int j=i*i;j<=n;j=j+i)
            sieve[j]=1;        
}  
bool checkIfSuperprime(int n)
{
    int aux=n,digitCount=0;
    while(aux)
    {
        digitCount++;
        aux/=10;
    }
    int helper=10; 
    for(int i=1;i<=digitCount;i++)
    {
        aux=n;
        aux=aux/helper*(helper/10)+aux%(helper/10);
        if(sieve[aux])
            return false;
        helper*=10;
    }
    return true;
}
int main() 
{
    int a,b,minSuperprime=0,maxSuperprime,superprimeCount=0; in>>a>>b;
    generateSieve(b);
    for(int i=a;i<=b;i++)
        if(sieve[i]==false)
            if(checkIfSuperprime(i))
            {

                if(minSuperprime==0)
                    minSuperprime=i;
                maxSuperprime=i;
                superprimeCount++;
            }
    out<<superprimeCount<<'\n'<<minSuperprime<<'\n'<<maxSuperprime;
}