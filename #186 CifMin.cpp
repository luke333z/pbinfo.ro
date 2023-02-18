#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
ifstream in("file.in");
ofstream out("file.out");

int main()
{
    int n, v[1001],x,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        int minn=10;
        while(x)
        {
            if(minn>x%10)
                minn=x%10;
            x/=10;
        }
        if(minn==0)
            cnt++;
        
            v[i]=minn;
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    swap(v[cnt+1], v[1]);
    for(int i=1;i<=n;i++)
        cout<<v[i];
    return 0;
}