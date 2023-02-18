#include <bits/stdc++.h>

using namespace std;
ifstream fin("fractii4.in");
ofstream fout("fractii4.out");


int main()
{
    int cerinta,n;
    fin>>cerinta;
    if(cerinta==1)
    {
       fin>>n;
       for(int i=1;i<=n;i++)
       {
            int nr1,nr2; fin>>nr1>>nr2;
            while(nr1!=nr2)
                if(nr1 > nr2)
                    nr1-=nr2;
                else
                    nr2-=nr1;
            //nr1 cmmdc
            if(nr1==1)
            {
                fout<<-1<<'\n';
            }
            else
            {
                int nrdiv=1,d=2,p;
                while(nr1>1)
                {
                    p=0;
                    while(nr1%d==0)
                    {
                        p++;
                        nr1/=d;
                    }
                    if(p)
                        nrdiv*=(p+1);
                    d++;
                    if(nr1>1&&d*d>nr1)
                        d=nr1;
                }
                fout<<nrdiv-1<<'\n';

            }
       }
    }
    if(cerinta==2)
    {
        fin>>n;
        for(int i=1;i<=n;i++)
        {
            int nr1,nr2; fin>>nr1>>nr2;
            int aux1=nr1,aux2=nr2;
                while(nr2 != 0)
                {
                    int r = nr1 % nr2;
                    nr1 = nr2;
                    nr2 = r;
                }

            fout<<aux1/nr1<<'/'<<aux2/nr1<<'\n';
        //nr1 cmmdc
       }
    }

    return 0;
}