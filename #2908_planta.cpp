#include <iostream>
#include <fstream>
using namespace std;
string filename = "planta";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int main()
{
    int d,a,b,n,h;
    in>>d>>a>>b>>n;
     h=d+(a-b)*(n/2);
    if(n%2==1)
        h=h+a;
        out<<h;
    return 0;

}