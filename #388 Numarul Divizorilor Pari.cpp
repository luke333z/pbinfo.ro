#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int main()
{
    int n,cnt=0;
    cin >> n;
    for(int d=1;d*d<=n;d++)
        if(n%d==0)
        {
           if(d%2==0)
                cnt++;
            if(d*d<n)
                if(n/d%2==0)
                cnt++;
        }
    cout<<cnt;
}