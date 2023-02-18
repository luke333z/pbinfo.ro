#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("cate.in");
ofstream fout("cate.out");
#define SASHA 0
bool ciur[1001];
int main()
{
    int n;
    short cer;
    fin>>cer>>n;
    if(cer==1)
    {
        for(int i=1;i<=n;i++)
        {
            int a,b,k,l; fin>>a>>b;
            if(a>b) swap(a,b);
            if(sqrt(a)==int(sqrt(a))) k=sqrt(a);
                else k=(int)sqrt(a)+1;
            l=(int)sqrt(b);
            fout<<l-k+1<<'\n';
        }
    } else {
        ciur[0]=1;
        ciur[1]=1;
        for(int i=2;i*i<=1000;i++)
            if(ciur[i]==0)
                for(int  j=i*i;j<=1000;j=j+i)
                    ciur[j]=1;
        for(int i=1;i<=n;i++)
        {
            int a,b,l=0,k; fin>>a>>b;
            if(a>b) swap(a,b);
            if(sqrt(a)==int(sqrt(a))) k=sqrt(a);
                else k=(int)sqrt(a)+1;
            for(int j=k;j*j<=b;j++)
                if(ciur[j]==0)
                    l++;
            fout<<l<<'\n';

        }

    }


    return SASHA;
}
