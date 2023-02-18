#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");
struct das{
    int x,pos;
}v[1001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
       { cin>>v[i].x;
        v[i].pos=i;}
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i].x>v[j].x)
            {
                swap(v[i].x,v[j].x);
                swap(v[i].pos,v[j].pos);
            }
    bool ok=0;
    for(int i=1;i<=n;i++)
    {
      
            cout<<v[i].pos<<' ';
            ok=1;
        
    }
    if(!ok)
        cout<<"NU EXISTA.";

    return 0;
}