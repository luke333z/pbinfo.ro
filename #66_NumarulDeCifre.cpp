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
    int x,cnt=0; cin>>x;
    if(x==0)
    {
        cout<<1;
        return 0;
    }
    while(x)
    {
        cnt++;
        x/=10;
    }
    cout<<cnt;
    return 0;
}