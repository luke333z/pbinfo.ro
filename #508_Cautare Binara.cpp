#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
bool find(int v[100],int st,int dr,int x){
    if(st>dr){
        return false;
    }
    int mijl=(st+dr)/2;
    if(v[mijl]==x){
        return true;
    }
    if(x<v[mijl]){
        return find(v,st,mijl-1,x);
    }
    else{
        return find(v,mijl+1,dr,x);
    }
}
int main()
{
    int v[25000],st,dr,n,x,m;
    std::cin>>n;
    for(int i=0;i<n;i++)
        std::cin>>v[i];
    std::cin>>m;
    st=0;dr=n-1;
    for(int i=1;i<=m;i++){
        std::cin>>x;
        std::cout<<find(v,st,dr,x)<<" ";
    }
    return 0;
}