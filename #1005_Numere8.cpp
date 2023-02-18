#include <iostream>
#include <fstream>
std::string filename = "numere8";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    int num, bank[100000] = {0};
    while(in>>num)
        if(num<10000)
            bank[num]=1;
    for(int i = 9999; i>0; i--)
        if(!bank[i])
            out<<i<<' ';
    return 0;
}