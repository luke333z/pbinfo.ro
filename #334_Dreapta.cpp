#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    double x1,x2,y1,y2;
    std::cin >> x1 >> y1 >> x2>>y2;
    if(x1==x2)
        std::cout<<"verticala";
    else if(y1==y2)
        std::cout<<"orizontala";
    else
        std::cout<<"oblica";
    return 0;
}