#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main() {
    double a,b,c,d,x,y;
    std::cin>>a>>b>>c>>d;
    if(a==c && b==d) {
        std::cout<<"Grafice echivalente";
        return 0;
    }
    else if(a==c) {
        std::cout<<"Grafice paralele";
        return 0;
    }
    x=(d-b)/(a-c);
    y=(a*x+b);
    std::cout<<std::fixed<<std::setprecision(2)<<x<<" "<<y;
}