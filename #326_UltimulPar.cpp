#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[1001];
int main()
{
    int n,x,y=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            y=x;
            //return 0;
        }
    }
    if(y%2==0)
        cout<<y;
    else
        cout<<"IMPOSIBIL";
    return 0;
}