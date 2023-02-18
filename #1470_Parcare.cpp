#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("parcare.in");
    ofstream fout("parcare.out");
    int li,zi,hi,mi,le,ze,he,me,t,c,mini,mine,minute,rest,ore,cost,zile;
    fin>>zi>>li>>hi>>mi>>ze>>le>>he>>me>>t>>c;
    if(li==1)
    {
        zile=31;
    }
    if(li==2)
    {
        zile=28;
    }
    if(li==3)
    {
        zile=31;
    }
    if(li==4)
    {
        zile=30;
    }
    if(li==5)
    {
        zile=31;
    }
    if(li==6)
    {
        zile=30;
    }
    if(li==7)
    {
        zile=31;
    }
    if(li==8)
    {
        zile=31;
    }
    if(li==9)
    {
        zile=30;
    }
    if(li==10)
    {
        zile=31;
    }
    if(li==11)
    {
        zile=30;
    }
    if(li==12)
    {
        zile=31;
    }
        
    mini=((li*zile+zi)*24+hi)*60+mi;
    mine=((le*zile+ze)*24+he)*60+me;
    minute=mine-mini;
    if(c==1)
    {
    fout<<minute;
    }
    if(c==2)
    {
        if(minute>15)
        {
        rest=minute%60;
        ore=(minute-rest)/60;
        if(rest>0)
        {
            ore++;
        }
        cost=t*ore;
        fout<<cost;
        }
        else
        {
        fout<<0;
        }
    }
    return 0;
}