#include <iostream>
using namespace std;

int main() {
int n, s = 0, p = 1;
cin >> n;
for (int i = 1; i * i <= n; i++) {
    p = i * i;
    s = s + p;
}
cout<< "Rezultatul este " << s;
return 0;
}