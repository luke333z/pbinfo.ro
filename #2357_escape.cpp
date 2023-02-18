#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "escape";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
bool prime(int n)
{
    if(n<2)
        return false;
    for(int d=2;d*d<=n;d++)
        if(n%d==0)
            return false;
    return true;
}
int control(int n)
{
    while(n>=10)
    {
        int aux=n,sum=0;
        while(aux)
        {
            sum+=aux%10;
            aux/=10;
        }
        n=sum;
    }
    return n;
}

int main ()
{
    int c,n,s1_p[10]={0},s2_p[10]={0},r[10]={0},r_pos[10]={},controlcode,code,score;
    in>>c>>n;
    for(int i=1;i<=n;i++)
    {
        in>>code;
        score=code%100;
        code/=100;
        controlcode=control(code);
        switch (prime(code))
        {
        case 0: s2_p[controlcode]+=score;break;
        case 1: s1_p[controlcode]+=score;break;
        }
        r[controlcode]++;
        r_pos[controlcode]=controlcode;
    }
    if(c==1)
    {
        int max1=0,max2=0;
        for(int i=1;i<=9;i++)
            if(s1_p[i]>max1)
                max1=s1_p[i];
        out<<max1<<' ';
        for(int i=1;i<=9;i++)
            if(s2_p[i]>max2)
                max2=s2_p[i];
        out<<max2;
    }
    if(c==2)
    {
        for(int i=1;i<=8;i++)
            for(int j=i+1;j<=9;j++)
                if(r[j]>r[i])
                {
                    std::swap(r[j],r[i]);
                    std::swap(r_pos[j],r_pos[i]);
                }
                else if(r[i]==r[j] && r_pos[i]>r_pos[j])
                    std::swap(r_pos[j],r_pos[i]);
        int k=1;
    
        while(r[k] && k<=9)
        {
            out<<r_pos[k]<<' ';
            k++;
        }
    }
    return 0;
    
}