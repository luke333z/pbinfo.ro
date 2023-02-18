#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[201];
int main()
{
    int n,x,y,x1,y1,maxx=0; cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(abs(x-y)>maxx)
            {
                maxx=abs(x-y);
                x1=x;y1=y;
            }
    }
    cout<<x1<<' '<<y1;
    
    return 0;
}