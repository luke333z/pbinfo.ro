#include <iostream>
using namespace std;
int main()
{
    int n, f=1, g=0, h=0; cin>>n;
  
    for(int i=0; i<n; i++){
      h=f+g;
      cout<<h<<" ";
    f=g; 
      g=h;
     
    }
}