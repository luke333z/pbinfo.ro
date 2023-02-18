#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
string filename = "sortsum";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int v[1000001];
const int ct=1e7;
int main()
{
    int n=0,k,l,maxx=0,x;
   
   while(in>>x)
   {
        n++;
        int aux =x,sum=0;
        while(x)
        {
            sum+=x%10;
            x/=10;
        }
        v[n]=sum*ct+ct-aux;
    }
    sort(v+1,v+n+1);
    for(int i=1;i<=n;i++)
            out<<ct-v[i]%ct<<' ';
    return 0;
}