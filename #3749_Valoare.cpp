#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream fin("valoare.in");
ofstream fout("valoare.out");

int c,v[27],N,space,ok; //c==1
char S[1005];
long long st[1005],suma;
int main()
{
    fin>>c;
    if(c==1)
    {
        char ch;
        while(fin>>ch)
        {
            if(ch>='A' && ch<='Z')
            {
                v[ch-'A'+1]++;
            }
        }
        for(int i=1;i<=26;i++)
        {
            if(v[i])
            {
                N++;
            }
        }
        fout<<N;

    }
    if(c==2)
    {
        char ch;
        int nr=0, sum=0;
        while(fin>>ch)
        {
            if(isdigit(ch))
            {
                nr=nr*10+(ch-48);
            } else {
                sum+=nr;
                nr=0;
            }
        }
        if(nr)
        {
            sum+=nr;
        }
        fout<<sum;
    }
    if(c==3)
    {
        fin.get();
        fin.getline(S, 1005);
        for(int i=0;i<(int)strlen(S);i++)
        {
            if(S[i]=='(')
            {
                space++;
                st[space]=-1;
            }
            else if(S[i]>='A' && S[i]<='Z')
            {
                while(S[i]>='A' && S[i]<='Z')
                {
                    space++;
                    st[space]=(int)(S[i]-'A'+1);
                    i++;
                }
                i--;
            }
            else if(S[i]==')')
            {
                suma=0;
                while(st[space]!=-1)
                {
                    suma+=st[space];
                    st[space]=0;
                    space--;
                }
                st[space]=suma;
            }
            else if(S[i]>='0' && S[i]<='9')
            {
                int nr=0;
                while(S[i] && (S[i]>='0' && S[i]<='9'))
                {
                    nr=nr*10+(S[i]-48);
                    i++;
                }
                i--;
                st[space]=st[space]*nr;

            }
        }
        suma=0;
        if(space==1)
            fout<<st[space];
        else
        {
            for(int i=1; st[i];i++)
            {
                if(st[i]>0)
                {
                    suma+=st[i];
                }
            }
            fout<<suma;
        }
    }
    return 0;
}