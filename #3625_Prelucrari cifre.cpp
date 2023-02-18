#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[10];
int main()
{
    int x,sumsq=0,sumodd=0,sum3=0,cnt5=0,prod=1,sum=0,aux; cin>>x;
    sum+=x%10;
    while(x)
    {
        aux=x%10;
        sumsq+=aux*aux;
        if(aux%2!=0)
            sumodd+=aux;
        if(aux%3==0)
            sum3+=aux;
        if(aux>5)
            cnt5++;
        if(aux!=0)
            prod*=aux;
        if(x<10)
            sum+=x;
        x/=10;
    }
    cout<<sumsq<<' '<<sumodd<<' '<<sum3<<' '<<cnt5<<' '<<prod<<' '<<sum;
    return 0;
}