#include <iostream>
using namespace std;
int main() {
   int n, a[201];
   bool ok = true;
   cin >> n;
   for (int i = 1; i <= n; ++i) {
       cin >> a[i];
   }
   for (int i = 1; i <= n/2; ++i) {
       if (a[i] % 2 != a[n-i+1] % 2) {
           ok = false;
       }
   }
   if (ok) {
       cout << "DA";
   }
   else {
       cout << "NU";
   }
   return 0;

}