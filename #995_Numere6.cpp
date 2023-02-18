#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "numere6";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main ()
{
    int a,b,v[25],k=0;
    in>>a>>b;
    if(a==0)
        k++,v[k]=0;
    if(b==0)
        k++,v[k]=0;
    while(a)
    {
        k++;
        v[k]=a%10;
        a/=10;
    }
    while(b)
    {
        k++;
        v[k]=b%10;
        b/=10;
    }
    for(int i=1;i<k;i++)
        for(int j=i+1;j<=k;j++)
            if(v[i]<v[j])
                std::swap(v[i],v[j]);
    for(int i=1;i<=k;i++)
        out<<v[i];
    return 0;
    
}