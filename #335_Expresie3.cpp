#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,i,S=0;
cin>>n;
while (n<0 || n>100)
{
cin>>n;
}
for (i=1;i<=n;i++)
if (i%2!=0)
S=S+i*(i+1);
else
S=S-i*(i+1);
cout<<"Rezultatul este "<<S;
return 0;
}