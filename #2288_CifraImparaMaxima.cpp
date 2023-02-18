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
    int x,cnt=0,ok=0,maxx=0; cin>>x;
    while(x)
    {
        if(x%10%2!=0)
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
        cout<<"nu exista";
    return 0;
}