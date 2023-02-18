#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
int main() 
{
    unsigned long long n, v, temp, val, nrdiv;
    cin >> n;
    for (int i=0;i<n;i++) {
        nrdiv=1; val=2;
        v = i*pow(2, i)+1;
        while (v>1) 
        {
            temp=0;
            while (v%val == 0) 
            {
                temp++;
                v=v/val;
            } 
            nrdiv = nrdiv * (temp + 1);
            val++;
            if (v > 1 && val * val > v) 
                val=v;
        } 
        cout << nrdiv << " "; 
    } 
    return 0;
}