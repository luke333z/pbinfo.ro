#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main(){
    int r; 
    double A, V, pi = atan(1) * 4;;
    cin >> r;
    A = 4 * pi * r * r;
    V = 4.0/3 * pi * r * r * r;
    cout << fixed << setprecision(2) << (long long)(A * 100) / 100.0 << " " << fixed << setprecision(2) << (long long)(V * 100)/ 100.0;
    return 0;
    
}