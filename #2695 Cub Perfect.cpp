#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

using namespace std;

int main()
{
    int m;
    cin>> m;
    long long int x;
    for(int i = 0 ; i < m ; ++i)
    {
         cin >> x;
        int n = cbrt(x);
        if(n*n*n==x)
            cout << "DA" << endl;
        else
            cout << "NU" << endl;
    }
}