#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mat[100][100], m ,n,sum=0;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
         for(int j=0; j<m; j++)
         {
             cin>>mat[i][j];
             if(mat[i][j]%2==0)
             {
                 sum=sum+mat[i][j];
             }
         }
    }
    cout<<sum;
    return 0;
}