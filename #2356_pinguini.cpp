#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "pinguini";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");

int main ()
{
    int c,n,v[10001],x,p_cnt=0,p_zone=0,zone_cnt=0,max_cnt=0;
    bool startzonecount=false;
    in>>c>>n;
    for(int i=1;i<=n;i++)
    {
        in>>x;
        if(x==1)
        {
            if(startzonecount)
            {
                zone_cnt++;
                if(p_zone>max_cnt)
                    max_cnt=p_zone;
                p_zone=0;
            }
            startzonecount=false;
        }
        else
        {
            p_cnt++;
            startzonecount=true;
            p_zone++;
        }
    }
    if(x==2)
    {zone_cnt++;
    if(p_zone>max_cnt)
        max_cnt=p_zone;}
    if(c==1)
        out<<p_cnt;
    if(c==2)
        out<<zone_cnt;
    if(c==3)
        out<<max_cnt;
    return 0;
    
}