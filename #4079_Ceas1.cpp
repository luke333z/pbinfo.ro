#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ceas.in");
ofstream fout("ceas.out");
#define VLAD 0
int main()
{
    int c; fin>>c;
    if(c==1)
    {
        int n,cnt=0;
        char x,c;
        fin>>x>>n;
        while(fin>>c)
        {
            if(c==x)
                cnt++;
        }
        fout<<cnt;
    }
    else
    {
        int n; fin>>n>>n;
        int nr,cnt,cntfin=0;//[5]{};
        for(int i=1;i<=n;i++)
        {
            cnt=0;
            fin>>nr;
            while(nr)
            {
                if(nr%100>12)
                {
                    //if(nr/10!=0)
                        cnt++;
                        nr/=10;
                }
                else if(nr%100>=10)
                {
                   if(nr/100!=0)
                        cnt++;
                    nr/=100;
                }
                else
                {
                    if(nr/10!=0)
                        cnt++;
                    nr/=10;
                }
            }

            //fout<<cnt<<endl;
            cntfin+=cnt;
        }
        fout<<cntfin;

    }
    return VLAD;
}
