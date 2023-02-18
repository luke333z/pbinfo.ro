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
    int v[3];
    cin >> v[0] >> v[1] >> v[2];
    sort(v, v + 3);
    cout << v[1]*v[2]+v[0];
    return 0; 
}