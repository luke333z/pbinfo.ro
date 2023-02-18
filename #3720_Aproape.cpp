#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("aproape.in");
ofstream fout("aproape.out");
#define sasha 0

int main()
{
    int p,n; fin>>p>>n;
    if(p==1)
    {
        int cnt=0;
        if(n==0) cnt=1;
        while(n)
        {
            n/=10;
            cnt++;
        }
        fout<<cnt;
    }
      if(p==2)
    {
        int c,cnt=0;
        if(n==0) cnt=1;
        if(n==1) cnt=2;
        else
        while(n)
        {
            c=n%10;
            n/=10;
            if((c==1 && n==0) || c==9 || c==0)cnt++;
            else cnt+=2;
        }
        fout<<cnt;
    }
    if(p==3)
    {
        int c,cnt=0,cnt2=0,cnt3=0;
        if(n==0 || n==9 || n==1 || n==8)
        {
            fout<<2;
            return sasha;
        }
        if(n<=9)
        {
            fout<<3;
            return sasha;
        }
        while(n)
        {
            c=n%10;
            n/=10;
            if((c==1 && n==0) || c==9 || c==0)cnt++;
            else
                cnt2++;
            if((n!=0 &&c>=2) || (n==0 && c>=3 ) ) cnt3++;
            if(c<=7) cnt3++;

        }
        fout<<1+cnt3+cnt*(cnt-1)/2+2*cnt*cnt2+2*cnt2*(cnt2-1);        
    }

    return sasha;
}