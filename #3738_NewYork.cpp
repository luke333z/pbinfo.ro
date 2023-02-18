#include <iostream>
#include <fstream>
using namespace std;
ifstream in("nyk.in");
ofstream out("nyk.out");
bool prim(int n)
{
    if(n==1 || n==0)
        return false;
    int cnt=0;
    for(int d=2;d*d<=n;d++)
        if(n%d==0)
        {
            cnt++;
            if(d*d<n)
                cnt++;
        }
    return cnt==0;
}
struct cladiri
{
    int h,poz;
    bool ok=false;
}v[1001];
int main()
{
    int n, m,x, maxprim=0, pozcladire,maxdiv=0,strmax=0 ;
    in>>n;
    for (int i=1;i<=n;i++)
    {
        int divcom,r;
        maxprim=0;
        pozcladire=0;
        in>>m;
        for(int j=1;j<=m;j++)
        {
            in>>x;
            if(prim(x))
            {
                v[i].ok=true;
                if(x>=maxprim)
                {
                    maxprim=x;
                    pozcladire=j;
                }
            }

            if(j==1)
                divcom=x;
            else
                while(x)
                {
                    r=divcom%x;
                    divcom=x;
                    x=r;
                }
        }
        v[i].h=maxprim;
        v[i].poz=pozcladire;

        if(divcom>=maxdiv)
            {
                maxdiv=divcom;
                strmax=i;
            }
    }
    if(v[strmax].ok==false)
    {
        out<<"Nu am gasit casa!";
    }
    else out<<strmax<<' '<<v[strmax].poz<<'\n'<<v[strmax].h;
    return 0;
}