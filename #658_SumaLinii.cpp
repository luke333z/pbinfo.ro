#include <bits/stdc++.h>
#include <fstream>
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
             sum=sum+mat[i][j];
         }
         cout<<sum<<" ";
         sum=0;
    }

    return 0;
}