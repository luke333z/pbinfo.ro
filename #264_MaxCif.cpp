#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
string filename = "maxcif";
ifstream in(filename + ".in");
ofstream out(filename + ".out");

int main(){
    int v[10]={0},x,maxim=0;
    while(in>>x)
    {
        v[x]++;
        maxim=max(maxim,v[x]);
    }
    for(int i=1;i<=9;i++)
        if(v[i]==maxim)
            out<<i<<' ';
    return 0;
}