#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");

int main(){
    int z,pb,b,pt,t,poz=-1;
    cin>>z>>pb>>b>>pt>>t;
    
    while(z){
        if(pb==pt && poz==-1)
            poz=pb;
        pb+=b;
        pt+=t;
        z--;
    }
    if(pb==pt && poz==-1)
        poz=pb;
    cout<<poz;
    return 0;
}