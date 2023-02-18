#include <iostream>
using namespace std;

int main() {
int n, d, p= 1, s= 0;
cin >>n;
for(d = 1; d <= n; d++ ) {
  p = d * d ;
  s = s + p;
}
cout <<"Rezultatul este " << s;
return 0;
}