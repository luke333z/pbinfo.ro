#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int main ()
{
    int n,s=0,x;
    cin >> n;
    n%=100;
    for (int i = 1; i<= n;++i)
    {
        x=i%10;
        s=(s+x*x*x*x)%10;
        
    }
    cout << s;
    return 0;
}