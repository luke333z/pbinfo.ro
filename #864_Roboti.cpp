#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("roboti.in");
ofstream fout("roboti.out");
int i,j, xf, yf, ok, n, m, x, y, u, a[1002][1002], x1, y1,dx[]= {-1,0,1,0},dy[]= {0,1,0,-1};
struct coada
{
    int x,y,a;
} q[1000004];
void lee(int x1, int y1, int xf, int yf, int &ok, int &u)
{
    int p, xx,yy;
    p=u=1;
    ok=0;
    q[1].x=x1;
    q[1].y=y1;
    q[p].a=0;
    a[x1][y1]=-1;
    while( p<=u && ok==0)
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
                a[xx][yy]=-1;
                if(q[u].x==xf && q[u].y==yf) ok=1;
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
            fin>>a[i][j];
    fin>>x1>>y1>>xf>>yf;
    for(i=1; i<=n; i++)
        a[i][0]=a[i][m+1]=1;
    for(i=1; i<=m; i++)
        a[0][i]=a[n+1][i]=1;
    lee(x1,y1,xf,yf,ok,u);
    if(ok==1)fout<<q[u].a;
    else fout<<-1;
    return 0;
}