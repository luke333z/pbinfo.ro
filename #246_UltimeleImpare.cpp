#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[10001];
int main()
{
    int n,x,y=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2!=0)
        {
            v[y++]=x;
            //return 0;
        }
    }
    if(y-1>=2)
        cout<<v[y-2]<<' '<<v[y-1];
    else
        cout<<"Numere insuficiente";
    return 0;
}