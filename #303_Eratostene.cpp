#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("eratostene.in");
ofstream fout("eratostene.out");
bool ciur[1000001];

int main()
{

    int n,nr,c=0;
    fin>>n;
    ciur[0]=1;
    ciur[1]=1;
    for(int i=2;i*i<=1000000;i++)
        if(ciur[i]==0)
            for(int  j=i*i;j<=1000000;j=j+i)
                ciur[j]=1;
    for(int i=1; i<=n;i++)
    {
        fin>>nr;
        if(ciur[nr]==0)
            c++;
    }
    fout<<c;
    return 0;
}