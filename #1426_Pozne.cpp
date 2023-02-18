#include <bits/stdc++.h>

using namespace std;
ifstream fin("pozne.in");
ofstream fout("pozne.out");
bool ciur[1000001];
int n,s,c;
void eratostene()
{
    ciur[0]=1; ciur[1]=1;
    for(int i=2;i*i<=1000000;i++)
        if(ciur[i]==0)
            for(int j=i*i;j<=1000000;j=j+i)
                ciur[j]=1;
}
int main()
{
    int cerinta;
    fin>>cerinta>>n>>s>>c;
    if(cerinta==1)
    {
        for(int i=1;i<=n;i++)
        {
            int nr;
            fin>>nr;
            int aux=nr;
            while(aux)
            {
                if(aux%10==c)
                {
                    fout<<nr<<' ';
                    break;
                }
                aux/=10;
            }
        }
    }
    if(cerinta==2)
    {
        eratostene();
        int nr,cnt=0,aux=0,suma=0;
        bool ok=0;
        for(int i=1;i<=n;i++)
        {
            aux=0;
            ok=0;
            fin>>nr;
            while(nr)
            {
                aux=aux*10+nr%10;
                if(nr%10==c)
                    ok=1;
                nr/=10;

            }
            if(ciur[aux]==0)
            {
                cnt++;
                if(ok==1)
                    suma-=s;
                else
                    suma+=s;

            }
        }
        fout<<cnt<<' ';
        if(suma==0)
            fout<<0;
        else if(suma>0)
            fout<<1;
        else
            fout<<-1;
    }

    return 0;
}