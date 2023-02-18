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
    long long x,cnt=0,ok=0,maxx=0; cin>>x;
    if (x == 0){ cout<<0;return 0;}
    while(x)
    {
        if(x%10%2==0)
        {
            ok=1;
            if(x%10>maxx)
                maxx=x%10;
        }
        x/=10;
    }
    if(ok)
        cout<<maxx;
    else
        cout<<"10";
    return 0;
}