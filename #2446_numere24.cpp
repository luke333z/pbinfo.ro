#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("numere24.in");
ofstream fout("numere24.out");
bool vpal(int aux)//verificare palindrom
{
    int pal=0,nr=aux;
    while(aux)
    {
        pal=pal*10+aux%10;
        aux/=10;
    }
    if(nr==pal)
    {
       return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int c;
    fin>>c;
    if(c==1)
    {
        long long int n;
        fin>>n;
        fout<<(n-1)*10;
    }
    if(c==2)
    {
        int x; fin>>x;
        int x1=x/10,x2=x/100,x3=x/1000,n1,n2,n3;
        if(x1%10==0)
            n1=0;
        else if(vpal(x1)==true)
            n1=1;
        else
            n1=2;

        if(x2%10==0)
            n2=0;
        else if(vpal(x2)==true)
            n2=1;
        else
            n2=2;

        if(x3%10==0)
            n3=0;
        else if(vpal(x3)==true)
            n3=1;
        else
            n3=2;

        fout<<n1<<' '<<n2<<' '<<n3;
    }
    if(c==3)
    {
        long long int k;
        fin>>k;
        if(k==1)
        {
            fout<<"9";
        } else if(k!=1 && k<10) {
            fout<<162*(int)pow(10,k-2)-9*(int)pow(10,(k-1)/2);
        } else {
            fout<<"161";
            for(int i=1; i<=(k/2)-2;i++)
                fout<<"9";
            fout<<"1";
            for(int i=1; i<=(k/2)-1;i++)
                fout<<"0";
            if(k%2==1)
                fout<<"0";

        }
    }
    return 0;
}