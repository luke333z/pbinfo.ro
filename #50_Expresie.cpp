#include <bits/stdc++.h>
using namespace std;

int main()
{
  
    int n;
    cin >> n;
    long long suma = 0;
    for(int i = 1; i <= n; ++i){
        long long prod = 1;
        for(long long j = 1; j <= i; ++j)
            prod *= j;
        suma += prod;
    }
    cout << "Rezultatul este " << suma;
    return 0;
}