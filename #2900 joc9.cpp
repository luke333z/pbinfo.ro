#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
#define NMAX 40001
string filename = "joc";
ifstream in(filename + ".in");
ofstream out(filename    + ".out");
bool verif(int x)
{
    int sum=0;
    while(x>9)
    {
        sum+=x%10;
        x/=10;
    }
    return sum==x;
}
int main() 
{
    int n,v[NMAX],cnt=0,x; in>>n;
    for(int i=1;i<=n;i++)
    {
        in>>x;
        if(verif(x))
        {
            cnt++;
            v[cnt]=x;
        }
    }
    for(int i=1;i<cnt;i++)
        for(int j=i+1;j<=cnt;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    for(int i=1;i<=cnt;i++)
        out<<v[i]<<' ';
   return 0;
}