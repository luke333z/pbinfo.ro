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
    int s=0,x;
    while (1)
    {
        cin>>x;
        if(x%2!=0)
            s++;
        if(x==0)
            break;
    }
    cout << s;
    return 0;
}