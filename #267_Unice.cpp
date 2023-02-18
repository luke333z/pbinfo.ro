#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
string filename = "unice";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
 int v[101]={0},x,n;
int main(){
   
    in>>n;
    for(int i=1;i<=n;i++)
    {
        in>>x;
        v[x]++;
    }
    for(int i=0;i<=99;i++)
        if(v[i]==1)
            out<<i<<' ';
    return 0;
}