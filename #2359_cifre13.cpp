#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("cifre13.in");
ofstream fout("cifre13.out");
bool a[1020][1020];

int main()
{
    int n,m,c,counter=0;
    fin>>n>>m>>c;
    for(int i=1;i<=c;i++)
    {
       int x , y , val;
        fin >> val >> x >> y;
        if(val==0)
        {
            a[x][y+1]=a[x][y+2]=a[x+1][y]=a[x+2][y]=a[x+3][y]=a[x+4][y]=a[x+5][y]=1;
            a[x+6][y+1]=a[x+6][y+2]=a[x+1][y+3]=a[x+2][y+3]=a[x+3][y+3]=a[x+4][y+3]=a[x+5][y+3]=1;
        }
        if(val==1)
        {
            a[x+2][y]=a[x+1][y+1]=a[x][y+2]=a[x+1][y+2]=a[x+2][y+2]=a[x+3][y+2]=a[x+4][y+2]=1;
            a[x+5][y+2]=a[x+6][y+2]=a[x+6][y+1]=a[x+6][y+3]=1;
        }
        if(val==2)
        {
            a[x+1][y]=a[x][y+1]=a[x+2][y]=a[x][y+2]=a[x+1][y+3]=a[x+2][y+3]=a[x+3][y+2]=1;
            a[x+4][y+1]=a[x+5][y]=a[x+6][y]=a[x+6][y+1]=a[x+6][y+2]=a[x+6][y+3]=1;
        }
        if(val==3)
        {
            a[x][y+1]=a[x][y+2]=a[x+1][y]=a[x+2][y]=a[x+4][y]=a[x+5][y]=1;
            a[x+6][y+1]=a[x+6][y+2]=a[x+1][y+3]=a[x+2][y+3]=a[x+3][y+2]=a[x+4][y+3]=a[x+5][y+3]=1;
        }
        if(val==4)
        {
            a[x+2][y]=a[x+1][y+1]=a[x][y+2]=a[x+3][y]=a[x+3][y+1]=1;
            a[x+3][y+2]=a[x+3][y+3]=a[x+4][y+2]=a[x+5][y+2]=a[x+6][y+2]=1;
        }
        if(val==5)
        {
            a[x][y+1]=a[x][y+2]=a[x][y+3]=a[x+1][y]=a[x+2][y]=a[x+3][y+1]=1;
            a[x+3][y+2]=a[x+4][y+3]=a[x+5][y+3]=a[x+6][y+2]=a[x+6][y+1]=a[x+5][y]=1;
        }
        if(val==6)
        {
            a[x][y+1]=a[x][y+2]=a[x+1][y]=a[x+2][y]=a[x+3][y]=a[x+4][y]=a[x+5][y]=1;
            a[x+6][y+1]=a[x+6][y+2]=a[x+1][y+3]=a[x+3][y+1]=a[x+3][y+2]=a[x+4][y+3]=a[x+5][y+3]=1;
        }
        if(val==7)
        {
            a[x][y]=a[x][y+1]=a[x][y+2]=a[x][y+3]=a[x+1][y+3]=1;
            a[x+2][y+2]=a[x+3][y+2]=a[x+4][y+1]=a[x+5][y+1]=a[x+6][y+1]=1;
        }
        if(val==8)
        {
            a[x][y+1]=a[x][y+2]=a[x+1][y]=a[x+2][y]=a[x+3][y+1]=a[x+4][y]=a[x+5][y]=1;
            a[x+6][y+1]=a[x+6][y+2]=a[x+1][y+3]=a[x+2][y+3]=a[x+3][y+2]=a[x+4][y+3]=a[x+5][y+3]=1;
        }
        if(val==9)
        {
            a[x][y+1]=a[x][y+2]=a[x+1][y]=a[x+2][y]=a[x+3][y+1]=a[x+3][y+2]=a[x+5][y]=1;
            a[x+6][y+1]=a[x+6][y+2]=a[x+1][y+3]=a[x+2][y+3]=a[x+3][y+3]=a[x+4][y+3]=a[x+5][y+3]=1;
        }
    }
    for(int i=1; i<=n;i++)
        for(int j=1; j<=m;j++)
                if(a[i][j]==1)
                    counter++;
    fout<<counter;
    return 0;
}