#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
string filename = "produse";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int n, m, cer, a[1001];
bool epuizat(int n)
{
    while(n>99)
        n/=10;
    return (n%10)%2==1;
}
int pc(int n)
{
    while(n>9)
        n/=10;
    return n;
}
int main(){
    in>>cer>>n;
    for(int i=1;i<=n;i++)
        in>>a[i];
    if(cer==1)
    {
        int cnt1=0, cnt2=0;
        for(int i=1;i<=n;i++)
            if(epuizat(a[i]))
                cnt1++;
            else
                cnt2++;
        out<<cnt2<<' '<<cnt1<<' ';
    }
    else
    {
        sort(a+1,a+n+1);
        for(int i=1;i<=9;i++){
            bool ok=false;
            for(int j=1; j<=n; j++)
                if(pc(a[j])==i)
                    ok=true;
            if(ok){
                out<<i<<' ';
                for(int j=1;j<=n;j++)
                    if(pc(a[j])==i)
                        out<<a[j]<<' ';
                out<<'\n';
            }
        }
    }
    return 0;
}