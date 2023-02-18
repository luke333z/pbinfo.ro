#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,r;
    fstream fin("2lan.in");
    ofstream fout("2lan.out");
    fin>>n;
    r=n%4;
    if(n==0)
    {
        fout<<1;
        return 0;
    }
    
    if(r==0 || r==4){
        fout<<"6";
    }
    if(r==1){
        fout<<"2";
    }
    if(r==2){
        fout<<"4";
    }
    if(r==3){
        fout<<"8";
    }
    return 0;
}