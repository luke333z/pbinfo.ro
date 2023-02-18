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
    int n;
    cin >> n;
    int x , y;
    cin >> x;
    int a , b , min=INT_MAX;
    int smin=INT_MAX;
    for(int i=2;i<=n;i++)
    {
        cin >> y;
        if(abs(x - y) < min)
            min = abs(x - y) , a = x , b = y;
        else if(abs(x-y)==min)
        {
            if(x + y < smin)
                smin=x+y , a=x , b=y;
        }
        x=y;
    }
    cout << a << ' ' << b;
    return 0;
}