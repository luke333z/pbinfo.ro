#include <iostream>
#include <fstream>
std::string filename = "cifreord";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    int n, freq[10]= {0};
    in>>n;
    while(in>>n)
    {
        freq[n]++;
    }
    int ok=0;
    for(int i=0; i<=9;i++)
    {
        while(freq[i] && ok!=20)
        {
            out<<i<<' ';
            ok++;
            freq[i]--;
        }
        if(ok==20)
        {
            out<<'\n';
            ok=0;
            i--;
        }

    }
    return 0;
}