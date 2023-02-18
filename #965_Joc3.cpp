#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("joc3.in");
ofstream fout("joc3.out");

int main()
{
    int a[30001]{0,1},b[30001]{0,1};


     bool pok=true ;
    int n,x,y;
    fin>>n>>x>>y;
    int i=1,j=n+1,s=0,t=0;
    a[1]=1;
    b[1]=1;
    while(pok)
    {
        i+=x;
        j-=y;
        if(i>n)i-=n;
        if(j<1)j+=n;
        a[i]++;
        b[j]++;


        s++;
        if(i==j ||  a[i]>1 || b[j]>1)
            pok=0;

    }
    for(int k =1 ; k<=n;k++)
        if(a[k]==0 && b[k]==0)
            t++;

    fout<<t<<' '<<s<<' '<<i<<' '<<j<< ' ';

    return 0;
}