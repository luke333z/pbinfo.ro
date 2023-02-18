#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int main ()
{
    int n,x,maxim=0,minim=INT_MAX;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(i%2==0)
            maxim=max(maxim,x);
        else
            if(x>=10&&x<=99)
            minim=min(minim,x);
    }
    cout<<maxim<<' ';
    if(minim>=10 && minim<=99)
        cout<<minim;
    else
        cout<<-1;
    return 0;
}