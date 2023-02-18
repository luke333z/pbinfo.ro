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
    int x;
    cin>>x;
    int aux=x%10;x/=10;
    while(x)
    {
        v[x%10]++;
        x/=10;
    }
    cout<<v[aux]+1;
    return 0;
}