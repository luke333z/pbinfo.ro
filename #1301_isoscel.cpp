#include <iostream>
#include <fstream>
#include <iomanip>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main()
{
    double a,b,c;
    std::cin >> a >> b >> c;
    if (a<b+c && b<a+c && c<a+b)
    {
        if(a==b || a==c || b==c)
        {
            if(a==b && b==c && c==a)
                std::cout << "Nu formeaza triunghi isoscel";   
            else
                std::cout << "Formeaza triunghi isoscel";
        }
        else    
            std::cout << "Nu formeaza triunghi isoscel";
    }
    else 
        std::cout << "Nu formeaza triunghi";
    return 0;
}