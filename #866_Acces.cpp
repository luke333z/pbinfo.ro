#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("acces.in");
ofstream fout("acces.out");
int i,j, n, m, x, y, u, a[1002][1002],dx[]= {-1,0,1,0},dy[]= {0,1,0,-1};
struct coada
{
    int x,y,a;
} q[1000004];
void lee(int x, int y, int &u)
{
    int p, xx,yy;
    p=u=1;
    q[1].x=x;
    q[1].y=y;
    q[p].a=0;
    a[x][y]=-1;
    while( p<=u)
    {
        for(i=0; i<=3; i++)
        {
            xx=q[p].x+dx[i];
            yy=q[p].y+dy[i];
            if(a[xx][yy]==0)
            {
                u++;
                q[u].x=xx;
                q[u].y=yy;
                q[u].a=q[p].a+1;
                a[xx][yy]=q[p].a+1;

            }
        }
        p++;
    }
}
int main()
{
    fin>>n>>m;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
        {
            char c;fin>>c;
            if(c=='#')
                a[i][j]=-1;
            if(c=='P')
            {
                x=i;
                y=j;
            }
        }
    for(i=1; i<=n; i++)
        a[i][0]=a[i][m+1]=-1;
    for(i=1; i<=m; i++)
        a[0][i]=a[n+1][i]=-1;
    lee(x,y,u);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j]==0)
                a[i][j]=-1;
            a[x][y]=0;
            fout<<a[i][j]<<' ';
        }
        fout<<'\n';
    }
    return 0;
}