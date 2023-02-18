#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("fulger.in");
ofstream fout("fulger.out");

int main()
{
    int n,x,a=0,k=0,aux;
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>x;
        aux=x;
        while(aux)
        {
            a=a*10+9;
            aux/=10;
        }
        x=a-x;
        fout<<x<<' ';
        if(x%100==10)
            k++;
        a=0;
    }
    fout<<endl<<k;
    return 0;
}