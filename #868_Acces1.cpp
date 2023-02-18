#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("acces1.in");
ofstream fout("acces1.out");
int n, m, x, y, u, a[1002][1002],dx[]= {-1,0,1,0},dy[]= {0,1,0,-1},paz=0;
struct coada
{
    int x,y,a;
} q[1000004];
void lee()
{
    int p, xx,yy;
    p=1;
    u=paz;

    while( p<=u)
    {
        for(int i=0; i<=3; i++)
        {
            xx=q[p].x+dx[i];
            yy=q[p].y+dy[i];
            if(a[xx][yy]==0)
            {
                u++;
                q[u].x=xx;
                q[u].y=yy;
                q[u].a=q[p].a+1;
                if(a[xx][yy]>q[p].a+1 || a[xx][yy]==0)
                    a[xx][yy]=q[p].a+1;

            }
        }
        p++;
    }
}
int main()
{
    fin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {
            char c;fin>>c;
            if(c=='#')
                a[i][j]=-2;
            if(c=='P')
            {
                a[i][j]==0;
                paz++;
                q[paz].x=i;
                q[paz].y=j;
                q[paz].a=0;
            }
        }
    for(int i=1; i<=n; i++)
        a[i][0]=a[i][m+1]=-1;
    for(int i=1; i<=m; i++)
        a[0][i]=a[n+1][i]=-1;
    lee();

    for(int i=1;i<=paz;i++)
        a[q[i].x][q[i].y]=-3 ;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {

            if(a[i][j]==0)
                fout<<'-'<<' ';
            if(a[i][j]==-2)
                fout<<'#'<<' ';
            if(a[i][j]==-3)
                fout<<0<<' ';
            else if(a[i][j]>0)
                fout<<a[i][j]<<' ';
        }
        fout<<'\n';
    }

    return 0;
}