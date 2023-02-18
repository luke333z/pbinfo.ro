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
    int s=0;
    int b=0;
    while (1)
    {
        int a=b;
        cin>>b;
        s+=b;
        if(b==a)
            break;
    }
    cout << s;
    return 0;
}