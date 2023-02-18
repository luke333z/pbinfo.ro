#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "fibo0";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    int x, y, cnt = 0;
    while(in>>x>>y)
        if(y%x==0)
            cnt++;
    out<<cnt;
    return 0;   
}