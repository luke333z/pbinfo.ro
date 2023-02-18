#include <bits/stdc++.h>
using namespace std;

ifstream fin("elfii.in");
ofstream fout("elfii.out");

int main()
{
    int x,y,z;
    fin>>x>>y>>z;
    if(x==0 && y==0 && z==0) fout<<"Poate data viitoare!";
    else
    if(x==0 && y==0)
    {
        if(z%2==0) fout<<"2"<<'\n'<<z<<"0"<<"0";
        else if(z%2==1) fout<<"2"<<'\n'<<z*100;
        else fout<<"Poate data viitoare!";
    }
    else
        if(z==0 && y==0)
    {
        if(x%2==0) fout<<"2"<<'\n'<<x<<"0"<<"0";
        else if(x%2==1) fout<<"2"<<'\n'<<x*100;
        else fout<<"Poate data viitoare!";
    }
    else
    if(x==0 && z==0)
    {
        if(y%2==0) fout<<"2"<<'\n'<<y<<"0"<<"0";
        else if(y%2==1) fout<<"2"<<'\n'<<y*100;
        else fout<<"Poate data viitoare!";
    }
    else
        if(x==0)
    {
        if(y%2==0 && z%2==0) fout<<"4"<<'\n'<<max(y,z)*100+min(y,z)*10+x;
        else if(y%2==0) fout<<"3"<<'\n'<<max(y,z)*100+min(y,z)*10+x;
        else if(z%2==0) fout<<"3"<<'\n'<<max(y,z)*100+min(y,z)*10+x;
         else fout<<"2"<<'\n'<<max(z,y)*100+min(z,y)*10+x;
    }
     else
        if(y==0)
    {
        if(x%2==0 && z%2==0) fout<<"4"<<'\n'<<max(x,z)*100+min(x,z)*10+y;
        else if(x%2==0) fout<<"3"<<'\n'<<max(x,z)*100+min(x,z)*10+y;
        else if(z%2==0) fout<<"3"<<'\n'<<max(x,z)*100+min(x,z)*10+y;
         else fout<<"2"<<'\n'<<max(x,z)*100+min(x,z)*10+y;
    }
     else
        if(z==0)
    {
        if(y%2==0 && x%2==0) fout<<"4"<<'\n'<<max(y,x)*100+min(y,x)*10+z;
        else if(y%2==0) fout<<"3"<<'\n'<<max(x,y)*100+min(x,y)*10+z;
        else if(x%2==0) fout<<"3"<<'\n'<<max(y,x)*100+min(y,x)*10+z;
    else fout<<"2"<<'\n'<<max(x,y)*100+min(x,y)*10+z;
    }

    else
    if(x%2==0 && y%2==0 && z%2==0)
    {
        fout<<"6"<<'\n';
        if(x>=y && x>=z && y>=z) fout<<x*100+y*10+z;
        else
             if(x>=y && x>=z && z>=y) fout<<x*100+z*10+y;
        else
         if(y>=z && y>=x && x>=z) fout<<y*100+x*10+z;
        else
        if(y>=z && y>=x && z>=x) fout<<y*100+z*10+x;
        else
        if(z>=x && z>=y && x>=y) fout<<z*100+x*10+y;
        else
        if(z>=x && z>=y && y>=x) fout<<z*100+y*10+x;
    }
    else
        if(x%2==0 && y%2==0 )
    {
        fout<<"4"<<'\n';
        if(max(x,y)>z) fout<<max(x,y)*100+z*10+min(x,y);
        else if(max(x,y)<z) fout<<z*100+max(x,y)*10+min(x,y);
    }
    else
        if(x%2==0 && z%2==0 )
    {
        fout<<"4"<<'\n';
          if(max(x,z)>y) fout<<max(x,z)*100+y*10+min(x,z);
        else if(max(x,z)<y) fout<<y*100+max(x,z)*10+min(x,z);

    }
    else
        if(z%2==0 && y%2==0 )
    {
        fout<<"4"<<'\n';
        if(max(z,y)>x) fout<<max(z,y)*100+x*10+min(z,y);
        else if(max(z,y)<x) fout<<x*100+max(z,y)*10+min(z,y);
    }
    else
    if(x%2==0)
    {
        fout<<"2"<<'\n';
        fout<<max(y,z)*100+min(y,z)*10+x;
    }
    else
    if(y%2==0)
    {
        fout<<"2"<<'\n';
        fout<<max(x,z)*100+min(x,z)*10+y;
    }
    else
    if(z%2==0)
    {
        fout<<"2"<<'\n';
        fout<<max(y,x)*100+min(y,x)*10+z;
    }
    if(x%2!=0 && y%2!=0 && z%2!=0)
    fout<<"Poate data viitoare!";
    return 0;


}