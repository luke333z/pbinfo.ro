#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   int sa=0,sb=0,sc=0;
   for(int i=a; i<=b; i++){
    sa=sa+i;
   }
   for(int j=b; j<=c; j++){
    sb=sb+j;
   }
   for(int k=a; k<=c; k++){
    sc=sc+k;
   }
   cout<<sa<<" "<<sb<<" "<<sc;
    return 0;
}